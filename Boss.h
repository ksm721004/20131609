#pragma once
#include "TankGameObject.h"

//������

class CBoss : public CTankGameObject
{
private:
public:
	CBoss();
	~CBoss();

	virtual void Render();
};