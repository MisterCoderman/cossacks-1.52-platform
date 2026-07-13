#pragma once
// GSC_ChatWindow.cpp duplicates a handful of chat-rendering helper names that Interface.cpp ALSO
// defines locally - in the original, dmcr.exe (Interface.cpp) and IChat.dll (this file) were
// separate link units, so each having its own private copy was never a conflict. Everything now
// links into one binary, so GSC_ChatWindow.cpp's copies are renamed here to avoid the clash. None
// of these are part of the public dllexport API this file exposes (Process_GSC_ChatWindow,
// LeaveGSCRoom, StartGSCGame, ...) - verified against chatMain.c/GSC_ChatWindow.cpp: purely
// internal helpers only this file's own screen-drawing code calls, never referenced by name from
// outside it. -include'd ONLY for this one file's compilation (see build_dmcr.sh), source
// untouched.
#define ReadWinString GSCCW_ReadWinString
#define PushWindow GSCCW_PushWindow
#define PopWindow GSCCW_PopWindow
#define IntersectWindows GSCCW_IntersectWindows
#define DRAWBOX GSCCW_DRAWBOX
#define AddPrimitiveChat GSCCW_AddPrimitiveChat
#define AddChatString GSCCW_AddChatString
#define RunHTTPC GSCCW_RunHTTPC
#define CheckForPersonalChat GSCCW_CheckForPersonalChat
#define CheckPersonality GSCCW_CheckPersonality
#define NCHATS GSCCW_NCHATS
#define MAXCHATS GSCCW_MAXCHATS
#define ChatSender GSCCW_ChatSender
#define ChatMess GSCCW_ChatMess
