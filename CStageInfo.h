#pragma once

#include <time.h>
#include "CGoalDae.h"
//enum GAME_STATE { INIT, READY, RUNNING, STOP, SUCCESS, FAILED, RESULT };

class CStageInfo
{
public:
	int nGoalBall;			// �����ؾ� �� ���� ���� 
	clock_t LimitTime;      // ���� �ð�
	clock_t StartTime;
	CGoalDae *gd;
	int nGoalBallCount;
public:
	CStageInfo();
	CStageInfo(int _nGB, clock_t _LT, int _gdLength, int _x, int _y);
	~CStageInfo();
	void Init();
};