#include "stdafx.h"
#include "Renderer.h"
#include"../Framework/Input.h"
#define MAP_SIZE 24

static char s_map[MAP_SIZE][MAP_SIZE]; 
static HANDLE s_consoleHandle;

void clear()
{
	memset(s_map, ' ', sizeof(s_map));
	for (size_t i = 0; i < MAP_SIZE; ++i)
	{
		s_map[i][MAP_SIZE - 1] = '\0';
	}
}
bool InitializeRenderer()
{
	s_consoleHandle = GetStdHandle
	(STD_OUTPUT_HANDLE);

	if (INVALID_HANDLE_VALUE == s_consoleHandle)
	{
		return false;
	}

	return true;
}


void RenderMap()
{
	const static COORD initialPos = { 0, 0 };
	const static CONSOLE_CURSOR_INFO info = { 100, false };

	SetConsoleCursorPosition(s_consoleHandle, initialPos);
	SetConsoleCursorInfo(s_consoleHandle, &info);

	const char** stage = GetMap();
	memcpy(s_map, stage, sizeof(s_map));

	// 1 : deltaTime = x : 1
	// x = 1 / deltaTime
	for (int i = 0; i < MAP_SIZE; i++)
	{
		puts(s_map[i]);
	}

	clear();
}
