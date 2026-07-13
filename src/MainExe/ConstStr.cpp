#ifdef _WIN32
    #include <windows.h>
#else
    #include "platform.h"
#endif
#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
#include "ResFile.h"
#include "gFile.h"
#define LOADSCX
char* GetTextByID(char* ID);
char* HiEdMode;//"Редактирование высот."
void LOADSC(char* ID,char** str){
	(*str)=GetTextByID(ID);
};
#undef LoadSC
#define LoadSC(z) char* z=NULL;
#include "ConstStr.h"
#undef LoadSC
#define LoadSC(x) LOADSC(#x,&x);
void LoadConstStr(){
#include "ConstStr.h"
};