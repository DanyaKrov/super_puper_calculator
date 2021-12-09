#include <windows.h>
#include <iostream>
#pragma comment(lib, "winmm.lib")

void music()
{
    PlaySound("track1.wav", NULL, SND_ASYNC);
}
