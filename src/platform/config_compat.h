// platform/config_compat.h
// Cross-platform configuration storage
// Replaces: Windows Registry (RegOpenKeyEx, RegSetValueEx, etc.)

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Read a string value from persistent config
// Win32: HKCU\Software\GSC Game World\<key>
// macOS: ~/Library/Application Support/GSC/config
// Linux: ~/.config/gsc/<key>
// Returns 1 on success, 0 if key not found
int platform_config_read(const char* key, char* value, int max_len);

// Write a string value to persistent config
// Returns 1 on success, 0 on failure
int platform_config_write(const char* key, const char* value);

#ifdef __cplusplus
}
#endif
