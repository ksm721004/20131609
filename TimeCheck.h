#pragma once

#include <time.h>

//�ð��� üũ���ִ� Ŭ����
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

	bool DelayCheck(); //������ �ð��� �Ѿ����� üũ���ִ� �Լ�
};