#pragma once
#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }

//����BGM�̃t�@�C���ꏊ�y�ѕ\��擾

const char WAVE_BANK[] = "data/Win/Wave Bank.xwb";
const char SOUND_BANK[] = "data/Win/Sound Bank.xsb";


const char TITLE_BGM[] = "�^�C�g��";
const char ENTER_SE[] = "����SE";


#endif