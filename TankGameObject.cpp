#include "TankGameObject.h"

CTankGameObject::CTankGameObject()
{
	pos.SetPos(0, 0);
	m_nLife = 0;
	m_nDir = UP;
}

CTankGameObject::~CTankGameObject()
{
}


void CTankGameObject::SetLife(int _nLife)
{
	m_nLife = _nLife;
}

void CTankGameObject::SetDir(int _nDir)
{
	m_nDir = _nDir;
}

void CTankGameObject::Hurt()
{
	m_nLife--;
}

int CTankGameObject::GetLife()
{
	return m_nLife;
}

int CTankGameObject::GetDir()
{
	return m_nDir;
}