
#pragma once

#ifndef _AUDIO_H
#define _AUDIO_H

#define WIN32_LEAN_AND_MEAN
#include<xact3.h>
#include "constants.h"

class Audio{
private:
//�|�C���^�錾
IXACT3Engine* xactEngine;
IXACT3WaveBank* waveBank;
IXACT3SoundBank* soundBank;
XACTINDEX cueI;
void* mapWaveBank;
void* soundBankData;
bool coInitialized;

public:
	//�R���X�g���N�^
	Audio();
	//�f�X�g���N�^
	virtual ~Audio();

	//�����o�ϐ�
	HRESULT initialize();

	void run();

	void playCue(const char cue[]);

	void stopCue(const char cue[]);

	void SetPlayCue(int n);

	void SetStopCue(int n);

};

#endif
