#pragma once
#include "Screen.h"

//������ ������Ʈ ���̽�
class CObject
{
protected:
public:
	CObject();
	virtual ~CObject();

	virtual void Render() = 0;
};