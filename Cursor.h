#pragma once
#include "Object.h"
#include "Position.h"

class CCursor : public CObject
{
private:
public:
	CCursor();
	~CCursor();
	CPosition *pos;

	virtual void Render();
};