#include "CStageInfo.h"

CStageInfo::CStageInfo()
{
}

CStageInfo::CStageInfo(int _nGB, clock_t _LT, int _gdLength, int _x, int _y)
{
	nGoalBall = _nGB;
	LimitTime = _LT;
	StartTime = clock();
	gd = new CGoalDae(_x, _y, _gdLength);
	nGoalBallCount = 0;
}

CStageInfo::~CStageInfo()
{
}

void CStageInfo::Init()
{
	StartTime = clock();
	nGoalBallCount = 0;
}