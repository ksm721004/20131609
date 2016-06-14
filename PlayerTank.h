#pragma once

#include "Tank.h"

//플레이어 탱크의 클래스

class CPlayerTank : public CTank
{
private:
public:
	CPlayerTank();
	~CPlayerTank();

	virtual void Render();
};