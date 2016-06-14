#pragma once
#include "CFootBallGameObject.h"
#include <time.h>

class CBall : public CFootBallGameObject
{
private:
	clock_t StartTime;
	clock_t MoveTime;
public:
	CBall();
	CBall(int _x, int _y);
	~CBall();

	bool shotReady; // Ball이 shot상태 true 아니면 false

	void Shot(); // 딜레이마다 y가 1씩 올라감
	void StartTimeSetting(); //StartTime = clock()으로 재설정
};