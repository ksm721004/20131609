#pragma once
#pragma once

#include "TankGameObject.h"

//��ũ�� �߻��ϴ� �Ѿ�

class CBullet : public CTankGameObject
{
private:
public:
	CBullet();
	~CBullet();

	virtual void Render();
	void Shot();
};