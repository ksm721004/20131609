#pragma once
#include "Tank.h"

enum _ENEMY_STATE{ENEMY_RUN, ENEMY_ROTATION};

//�� ��ũ�� Ŭ����

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