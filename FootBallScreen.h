#pragma once
#include "CStageScreen.h"

class CFootBallScreen : public PrintGameScreen
{
private:
public:
	virtual void StartScreen();
	virtual void StageScreen(int g_nStage);
	virtual void SuccessScreen();
	virtual void EndScreen();
	void ResultScreen(int g_nStage);
	void ScoreScreen(int _nStage, clock_t _LimitTime, clock_t _StartTime, int _nGoalBall, int _ballCount);
	void BackScreen();
	void GoalMessage(int nX, int nY);
};