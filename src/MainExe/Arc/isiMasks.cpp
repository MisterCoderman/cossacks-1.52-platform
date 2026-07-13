#pragma warning (disable : 4035)

#include <windows.h>

void isiDecryptMem(LPBYTE lpbBuffer, DWORD dwSize, BYTE dbKey) {
    // �������� ������� ����������
    if (!lpbBuffer || dwSize == 0) return; // �������� �� nullptr � ������� ������

    // ���������� ��������� � ������� ����
    LPBYTE buffer = lpbBuffer;

    // ���� ������������
    for (DWORD i = 0; i < dwSize; i++) {
        BYTE al = buffer[i];      // ������ ������� ����
        al = ~al;                 // �������� ����� (not)
        al ^= dbKey;              // XOR � ������
        buffer[i] = al;           // ���������� ���������
    }
}

void isiEncryptMem(LPBYTE lpbBuffer, DWORD dwSize, BYTE dbKey) {
    // �������� ������� ����������
    if (!lpbBuffer || dwSize == 0) return; // �������� �� nullptr � ������� ������

    // ���� ����������
    BYTE invertedKey = ~dbKey; // ��������������� ����
    for (DWORD i = 0; i < dwSize; i++) {
        BYTE al = lpbBuffer[i];    // ������ ������� ����
        al ^= invertedKey;         // XOR � ��������������� ������
        al = ~al;                  // �������� ����������
        lpbBuffer[i] = al;         // ���������� ���������
    }
}

DWORD isiCalcHash(LPSTR lpszFileName) {
    char szFileName[64];

    // ������������� ������
    ZeroMemory(szFileName, 64);
    if (lpszFileName) {
        // �������� ������ � �������� � �������� ��������
        strncpy(szFileName, lpszFileName, 63); szFileName[63] = '\0';
        for (int i = 0; i < 64 && szFileName[i]; i++) {
            szFileName[i] = toupper(szFileName[i]);
        }
    }

    DWORD hash = 0;
    for (int i = 0; i < 16; i++) {
        DWORD value = *(DWORD*)&szFileName[i * 4];
        // ������������ ������: xchg ah,al
        DWORD swapped = (value & 0xFFFF0000) | ((value & 0xFF) << 8) | ((value & 0xFF00) >> 8);
        // rol eax,16
        swapped = (swapped << 16) | (swapped >> 16);
        // xchg ah,al
        swapped = (swapped & 0xFFFF0000) | ((swapped & 0xFF) << 8) | ((swapped & 0xFF00) >> 8);
        hash += swapped;
    }

    return hash;
}


BOOL isiMatchesMask(LPSTR lpszFile, LPSTR lpszMask) {
    char szFile[255];
    char szMask[255];

    // ����������� � ���������� � �������� ��������
    if (lpszFile) {
        strncpy(szFile, lpszFile, 254); szFile[254] = '\0';
        for (int i = 0; i < 255 && szFile[i]; i++) {
            szFile[i] = toupper(szFile[i]);
        }
    }
    else {
        szFile[0] = 0;
    }

    if (lpszMask) {
        strncpy(szMask, lpszMask, 254); szMask[254] = '\0';
        for (int i = 0; i < 255 && szMask[i]; i++) {
            szMask[i] = toupper(szMask[i]);
        }
    }
    else {
        szMask[0] = 0;
    }

    const char* file = szFile;
    const char* mask = szMask;

    while (true) {
        char maskChar = *mask;
        char fileChar = *file;

        // ���� ��� ������ ����������� ������������
        if (maskChar == 0 && fileChar == 0) {
            return TRUE;
        }

        // ���� ���� ������ �����������, � ������ ���
        if (maskChar == 0 || fileChar == 0) {
            // ����������: ���� ����� ������������� �� '*', ��� ���������
            if (maskChar == '*') {
                mask++;
                continue;
            }
            return FALSE;
        }

        if (maskChar == '?') {
            mask++;
            file++;
            continue;
        }

        if (maskChar == '*') {
            mask++;
            if (*mask == 0) return TRUE; // '*' � ����� ����� � ����������

            while (*file) {
                if (*file == *mask) {
                    file++;
                    mask++;
                    break;
                }
                file++;
            }
            continue;
        }

        if (maskChar != fileChar) {
            return FALSE;
        }

        mask++;
        file++;
    }

    return TRUE;
}

BOOL isiFileExists(LPSTR lpszFileName) {
    if (!lpszFileName || !lpszFileName[0]) return FALSE; // �������� �� nullptr � ������ ������

    WIN32_FIND_DATA FindData;
    HANDLE hFindFile = FindFirstFileA(lpszFileName, &FindData);
    if (hFindFile != INVALID_HANDLE_VALUE) {
        FindClose(hFindFile);
        return TRUE;
    }
    return FALSE;
}

#pragma warning (default : 4035)