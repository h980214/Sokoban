#include "stdafx.h"
#include "Input.h"

static bool s_isWKeyDown = false;
static bool s_isAKeyDown = false;
static bool s_isSKeyDown = false;
static bool s_isDKeyDown = false;

static bool s_isWKeyDownPrev = false;
static bool s_isAKeyDownPrev = false;
static bool s_isSKeyDownPrev = false;
static bool s_isDKeyDownPrev = false;


static bool s_currentKetStates[256] = { false };
static bool s_prevKeyStates[256] = { false };

bool isKeyDown(int keyCode)
{
	if (0x8000 & GetAsyncKeyState(keyCode))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void UpdateInput()
{
	memcpy(s_prevKeyStates, s_currentKetStates, sizeof(s_prevKeyStates));
	for (int keyCode = 0; keyCode < 255; ++keyCode)
	{
		if (isKeyDown(keyCode))
		{
			s_currentKetStates[keyCode] = true;
		}
		else
		{
			s_currentKetStates[keyCode] = false;
		}
	}

}

bool GetButtonDown(EKeyCode keyCode)
{
	
	if (false == s_prevKeyStates[keyCode] && s_currentKetStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}



bool GetButtonUp(EKeyCode keyCode)
{
	if (s_prevKeyStates[keyCode]&& false == s_currentKetStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}



bool GetButton(EKeyCode keyCode)
{
	if (s_prevKeyStates[keyCode] && false == s_currentKetStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}