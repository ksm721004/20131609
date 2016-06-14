#pragma once

//스테이지 클래스

enum _GAME_RUN_STATE_ {NONGAME ,GAME, WIN, LOSE};
class CStage
{
protected:
	int gameState;
	int stageNum;
public:
	
	CStage();
	virtual ~CStage();

	virtual void Init() = 0;
	virtual void Render() = 0;
	virtual void Update() = 0;
	virtual void KeyInput(char _input) = 0;
	int GetState();
	void SetState(int _gameState);
};