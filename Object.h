#pragma once
#include "Screen.h"

//게임의 오브젝트 베이스
class CObject
{
protected:
public:
	CObject();
	virtual ~CObject();

	virtual void Render() = 0;
};