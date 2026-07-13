#!/usr/bin/env python3
"""
Wrap all __asm blocks in GP_Draw.cpp with #ifdef _MSC_VER / #endif guards.
Also wrap pointer-to-int cast lines individually.

Strategy:
- Each __asm { ... } block gets wrapped individually
- Each ptr-to-int cast line (int x = int(SomePtr)) gets wrapped individually
- Exception: if a ptr cast is on the line immediately before __asm (within 2 lines),
  they get merged into one #ifdef block
"""

import re
import sys


def find_matching_brace(lines, start_line, start_col=None):
    """Find the line index of the closing brace matching the opening brace."""
    depth = 0
    for i in range(start_line, len(lines)):
        line = lines[i]
        start = 0
        if i == start_line and start_col is not None:
            start = start_col
        for j in range(start, len(line)):
            if line[j] == '{':
                depth += 1
            elif line[j] == '}':
                depth -= 1
                if depth == 0:
                    return i
    return None


def find_function_name(lines, line_idx):
    """Find the enclosing function name for a given line."""
    for i in range(line_idx, -1, -1):
        line = lines[i].strip()
        m = re.match(r'(?:__declspec\([^)]*\)\s+)?(?:void|int|bool|byte\*?|inline\s+void|inline\s+int|inline\s+bool)\s+([\w:~]+)\s*\(', line)
        if m:
            return m.group(1)
        m = re.match(r'(?:__declspec\([^)]*\)\s+)?([\w:~]+)\s*\(', line)
        if m:
            name = m.group(1)
            if name not in ('if', 'for', 'while', 'switch', 'else', 'case', 'do', 'catch', 'sizeof', 'return', 'delete', 'new', 'memset', 'memcpy', 'sprintf', 'assert', 'free', 'malloc', 'realloc', 'div'):
                if not line.startswith('//'):
                    return name
    return "unknown"


def get_leading_whitespace(line):
    """Get the leading whitespace of a line."""
    m = re.match(r'^(\s*)', line)
    return m.group(1) if m else ''


def is_ptr_to_int_cast(line):
    """Check if a line has a pointer-to-int cast that would fail on 64-bit."""
    stripped = line.strip()
    # Skip comments
    if stripped.startswith('//'):
        return False
    if not re.search(r'=\s*int\s*\(', stripped):
        return False
    # Exclude int(Vertex[...]) which is byte-to-int (safe)
    if re.search(r'int\s*\(\s*Vertex\[', stripped):
        return False
    # Known pointer variables that cause issues
    if re.search(r'int\s*\(\s*(ScreenPtr|CData|Pic|ptr|trans|Encoder|lpGP)', stripped):
        return True
    return False


def main():
    with open('GP_Draw.cpp', 'r') as f:
        content = f.read()
    
    lines = content.split('\n')
    # Remove trailing empty line if present
    if lines and lines[-1] == '':
        lines = lines[:-1]
    
    print(f"Total lines: {len(lines)}")
    
    # ===== PASS 1: Find all __asm blocks =====
    asm_blocks = []  # (asm_keyword_line, brace_open_line, brace_close_line)
    
    for i, line in enumerate(lines):
        stripped = line.strip()
        if stripped.startswith('//'):
            continue
        if '__asm' not in stripped:
            continue
        if '#' in line and 'ifdef' in line:
            continue
            
        # Find opening brace
        brace_line = None
        brace_col = None
        
        if '{' in line:
            brace_line = i
            brace_col = line.index('{')
        else:
            for j in range(i + 1, min(i + 5, len(lines))):
                if '{' in lines[j]:
                    brace_line = j
                    brace_col = lines[j].index('{')
                    break
        
        if brace_line is not None:
            end_line = find_matching_brace(lines, brace_line, brace_col)
            if end_line is not None:
                asm_blocks.append((i, brace_line, end_line))
            else:
                print(f"WARNING: No closing brace for __asm at line {i+1}")
        else:
            print(f"WARNING: No opening brace for __asm at line {i+1}")
    
    print(f"Found {len(asm_blocks)} __asm blocks")
    
    # ===== PASS 2: Find all ptr-to-int casts =====
    ptr_casts = []  # line indices
    
    for i, line in enumerate(lines):
        if is_ptr_to_int_cast(line):
            ptr_casts.append(i)
    
    print(f"Found {len(ptr_casts)} pointer-to-int cast lines")
    for c in ptr_casts:
        print(f"  Line {c+1}: {lines[c].strip()}")
    
    # ===== PASS 3: Create guard regions =====
    # Each region: (start_line, end_line, type, func_name)
    # type: 'asm' or 'cast'
    
    regions = []
    used_casts = set()
    
    for asm_kw, asm_open, asm_close in asm_blocks:
        region_start = asm_kw
        region_end = asm_close
        
        # Check if there's a ptr cast immediately before (within 2 lines, no real code in between)
        for cast_line in ptr_casts:
            if cast_line in used_casts:
                continue
            # Cast must be right before the asm keyword (allow 1-2 lines between)
            if cast_line < asm_kw and asm_kw - cast_line <= 3:
                # Check intervening lines are empty, whitespace, comments, or simple declarations
                ok = True
                for between in range(cast_line + 1, asm_kw):
                    between_stripped = lines[between].strip()
                    if between_stripped and not between_stripped.startswith('//'):
                        # Simple int assignment (not ptr cast) - OK to include
                        if re.match(r'^int\s+\w+\s*=\s*[^(]*;$', between_stripped):
                            pass
                        elif between_stripped == '':
                            pass
                        else:
                            ok = False
                            break
                if ok:
                    region_start = cast_line
                    used_casts.add(cast_line)
        
        func_name = find_function_name(lines, asm_kw)
        regions.append((region_start, region_end, 'asm', func_name))
    
    # Standalone ptr casts (not merged with any asm block)
    standalone_casts = [c for c in ptr_casts if c not in used_casts]
    
    for cast_line in standalone_casts:
        func_name = find_function_name(lines, cast_line)
        regions.append((cast_line, cast_line, 'cast', func_name))
    
    # Sort by start line
    regions.sort(key=lambda r: r[0])
    
    print(f"\nRegions to wrap: {len(regions)}")
    print(f"  ASM regions: {sum(1 for r in regions if r[2] == 'asm')}")
    print(f"  Cast-only regions: {sum(1 for r in regions if r[2] == 'cast')}")
    
    # Print standalone casts
    for r in regions:
        if r[2] == 'cast':
            print(f"  Standalone cast at line {r[0]+1}: {lines[r[0]].strip()} (in {r[3]})")
    
    # ===== PASS 4: Apply guards from bottom to top =====
    asm_wrapped = 0
    casts_wrapped = 0
    
    for region_start, region_end, rtype, func_name in reversed(regions):
        indent = get_leading_whitespace(lines[region_start])
        
        if rtype == 'asm':
            # Insert after region_end: #else, TODO, #endif
            lines.insert(region_end + 1, f"{indent}#else")
            lines.insert(region_end + 2, f"{indent}\t// TODO: C fallback for {func_name}")
            lines.insert(region_end + 3, f"{indent}#endif")
            # Insert before region_start: #ifdef _MSC_VER
            lines.insert(region_start, f"{indent}#ifdef _MSC_VER")
            asm_wrapped += 1
        elif rtype == 'cast':
            # For standalone ptr casts that are only used in guarded asm blocks,
            # just guard them with #ifdef/#endif (no #else needed)
            lines.insert(region_end + 1, f"{indent}#endif")
            lines.insert(region_start, f"{indent}#ifdef _MSC_VER")
            casts_wrapped += 1
    
    # ===== PASS 5: Write output =====
    with open('GP_Draw.cpp', 'w') as f:
        f.write('\n'.join(lines) + '\n')
    
    # Verify
    with open('GP_Draw.cpp', 'r') as f:
        result = f.read()
    
    asm_count = len(re.findall(r'__asm', result))
    ifdef_count = result.count('#ifdef _MSC_VER')
    else_count = len(re.findall(r'#else\b', result))
    endif_count = result.count('#endif')
    
    print(f"\n=== RESULTS ===")
    print(f"ASM blocks wrapped: {asm_wrapped}")
    print(f"Standalone ptr-to-int casts wrapped: {casts_wrapped}")
    print(f"Total #ifdef _MSC_VER: {ifdef_count}")
    print(f"Total #else: {else_count}")
    print(f"Total #endif: {endif_count}")
    print(f"__asm occurrences: {asm_count}")
    
    if ifdef_count != endif_count:
        print(f"ERROR: #ifdef/#endif mismatch!")
    else:
        print(f"OK: #ifdef/#endif balanced")

if __name__ == '__main__':
    main()
