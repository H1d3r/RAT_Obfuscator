#ifndef LOADER_H
#define LOADER_H

#include <iostream>
#include <windows.h>

using namespace std;

int RunPayload(PBYTE pPayload, int payloadSize, int bofFuncHash, char* commandPara, int commandParaLen, char*& outputData, int& outputDataLen, PVOID specialParaList[]);

#endif