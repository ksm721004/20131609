#pragma once
#include "TankGameObject.h"
#include "Bullet.h"

#define BulletSize 5

//�÷��̾� ��ũ, �� ��ũ�� ���̽�

class CTank : public  CTankGameObject
{
protected:
public:
	CTank();
	virtual ~CTank();

	CTime *ShotDelay;
	CBullet *m_pBullet[BulletSize];

	void Shot();
	void MoveBullet();
};