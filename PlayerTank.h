#pragma once

#include "Tank.h"

//�÷��̾� ��ũ�� Ŭ����

class CPlayerTank : public CTank
{
private:
public:
	CPlayerTank();
	~CPlayerTank();

	virtual void Render();
};