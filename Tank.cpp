#include "Tank.h"

CTank::CTank()
{
	for (int i = 0; i < BulletSize; i++)
	{
		m_pBullet[i] = new CBullet();
	}
	ShotDelay = new CTime(200);
}

CTank::~CTank()
{
}

void CTank::Shot()
{
	if (ShotDelay->DelayCheck() && m_nLife)
		for (int i = 0; i < BulletSize; i++)
		{
			if (!(m_pBullet[i]->GetLife()))
			{
				m_pBullet[i]->pos.SetPos(pos.GetX(), pos.GetY());
				m_pBullet[i]->SetDir(m_nDir);
				m_pBullet[i]->SetLife(1);
				break;
			}
		}
}

void CTank::MoveBullet()
{
	for (int i = 0; i < BulletSize; i++)
	{
		m_pBullet[i]->Shot();
	}
}