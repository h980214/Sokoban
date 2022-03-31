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

	
	// 2�� �������� Ư�� �޽��� �����̱�
}

void render()
{
	RenderMap();
}


int32_t Run()
{


	// Game Loop =>  �÷��̾������ �Է��� �ϵ����� �и���Ų��.
	//https://gameprogrammingpatterns.com/game-loop.html

	//Game Loop�� ��ü�� Frame

	while (true)
	{
		//������ ���� ---- ���� ������ ����
		// 
		//�Է�ó��
		processInput();
			//������Ʈ
			update();
			//������
			render();
	}



	return 0;
}