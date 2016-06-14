#pragma once
#include "CStageScreen.h"

class CTankGameScreen : public PrintGameScreen
{
private:
public:
	virtual void StartScreen();
	virtual void EndScreen();
	virtual void SuccessScreen();
	virtual void StageScreen(int _stage);
	void StateScreen(int _stage, int _playerHp, int _bossHp);
};