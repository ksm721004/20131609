#include "TimeCheck.h"

static clock_t curTime;

CTime::CTime()
{
	delayTime = 0;
	oldTime = 0;
}

CTime::CTime(clock_t _delayTime)
{
	delayTime = _delayTime;
	oldTime = 0;
}

CTime::~CTime()
{
}

void CTime::SetDelayTime(clock_t _delayTime)
{
	delayTime = _delayTime;
}

void CTime::SetOldTime()
{
	oldTime = clock();
}

void CTime::SetCurTime()
{
	curTime = clock();
}

bool CTime::DelayCheck()
{
	if (curTime - oldTime > delayTime)
	{
		SetOldTime();
		return true;
	}
	return false;
}