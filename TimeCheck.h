#pragma once

#include <time.h>

//시간을 체크해주는 클래스
class CTime
{
private:
	clock_t delayTime;
	clock_t oldTime;
public:
	CTime();
	CTime(clock_t _delayTime);
	~CTime();

	void SetDelayTime(clock_t _delayTime);
	void SetOldTime();
	static void SetCurTime();

	bool DelayCheck(); //딜레이 시간이 넘었는지 체크해주는 함수
};