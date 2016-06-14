#pragma once
#include "Screen.h"

class PrintGameScreen
{
private:
public:
	virtual void StartScreen() = 0;
	virtual void EndScreen() = 0;
	virtual void SuccessScreen() = 0;
	virtual void StageScreen(int _stage) = 0;
};