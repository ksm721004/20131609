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

	bool shotReady; // Ball�� shot���� true �ƴϸ� false

	void Shot(); // �����̸��� y�� 1�� �ö�
	void StartTimeSetting(); //StartTime = clock()���� �缳��
};