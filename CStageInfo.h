#pragma once

#include <time.h>
#include "CGoalDae.h"
//enum GAME_STATE { INIT, READY, RUNNING, STOP, SUCCESS, FAILED, RESULT };

class CStageInfo
{
public:
	int nGoalBall;			// 골인해야 할 볼의 개수 
	clock_t LimitTime;      // 제한 시간
	clock_t StartTime;
	CGoalDae *gd;
	int nGoalBallCount;
public:
	CStageInfo();
	CStageInfo(int _nGB, clock_t _LT, int _gdLength, int _x, int _y);
	~CStageInfo();
	void Init();
};