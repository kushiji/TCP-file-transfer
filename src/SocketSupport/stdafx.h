// stdafx.h: dołącz plik do standardowych systemowych plików dołączanych,
// lub specyficzne dla projektu pliki dołączane, które są często wykorzystywane, ale
// są rzadko zmieniane
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Wyklucz rzadko używane rzeczy z nagłówków systemu Windows
#define PORT_LENGTH 256
#define BUFFER_SIZE 1024
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
// Pliki nagłówkowe systemu Windows:
#include <windows.h>
extern bool shouldTerminateConnection;
extern bool connectionEstablished;



// TODO: W tym miejscu odwołaj się do dodatkowych nagłówków wymaganych przez program
