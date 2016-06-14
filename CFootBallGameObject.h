#pragma once
#include <iostream>
#include "Screen.h"

#pragma warning (disable : 4996)

class CFootBallGameObject
{
private:
protected:
	int x, y; // x, y좌표
	int centerX, centerY; // x, y 의 가운데 좌표
	int center; // 이름의 길이 절반 값
	char *name; // 이름
public:
	CFootBallGameObject();
	CFootBallGameObject(int x, int y, char *_name);

	~CFootBallGameObject();

	void Move(int _x, int _y); // 현재 좌표로부터 움직임
	void PointMove(int _x, int _y); // 입력된 좌표로 움직임
	void Render(); // 객체의 name을 출력
	int NameLen(); // 객체의 name 길이 반환
	int ReturnX(); // x좌표 반환
	int ReturnY(); // y좌표 반환
	int ReturnCenterX(); // centerX좌표 반환
	int ReturnCenter(); // center 값 반환
};