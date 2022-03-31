#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"
#include "Input.h"
#include "Timer.h"
bool Initialize()
{
	if (false == InitializeRenderer())
	{
		return false;
	}

	
	return true;
}

void processInput()
{
	UpdateInput();
}


void update()
{
	static float printTime;
	
	while (1)
	{
		printTime += GetDeltaTime();

		if (printTime >= 2.0f)
		{
			printTime = 0.0f;

		}


		{

		}


	}

	
	// 2초 간격으로 특정 메시지 깜빡이기
}

void render()
{
	RenderMap();
}


int32_t Run()
{


	// Game Loop =>  플레이어부터의 입력을 하드웨어와 분리시킨다.
	//https://gameprogrammingpatterns.com/game-loop.html

	//Game Loop의 전체를 Frame

	while (true)
	{
		//프레임 시작 ---- 다음 프레임 시작
		// 
		//입력처리
		processInput();
			//업데이트
			update();
			//렌더링
			render();
	}



	return 0;
}