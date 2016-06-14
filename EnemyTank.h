#pragma once
#include "Tank.h"

enum _ENEMY_STATE{ENEMY_RUN, ENEMY_ROTATION};

//적 탱크의 클래스

class CEnemyTank : public CTank
{
private:
	int iState;
public:
	CEnemyTank();
	~CEnemyTank();

	CTime *RotateDelay;

	virtual void Render();

	void Move();
	void SetState(int _iState);

	int GetState();
};