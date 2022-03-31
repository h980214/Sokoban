#pragma once

#include<stdint.h>
#include<stdbool.h>

typedef enum KeyCode
{
	KEYCODE_W = 'W',
	KEYCODE_A = 'A',
	KEYCODE_S = 'S',
	KEYCODE_D = 'D',
} EKeyCode ;

/// <summary>
/// 입력 상태를 업데이트 한다.
/// </summary>
void UpdateInput();

/// <summary>
/// 현재 프레임에 버튼이 눌렀지는 체크한다.
/// </summary>
/// <param name="keyCode"></param>
/// <returns>눌렀다면 true, 아니면 false </returns>
bool GetButtonDown(EKeyCode keyCode);

/// <summary>
/// 현재 프레임에 버튼이 떼었는지 체크한다.
/// </summary>
/// <param name="keyCode"></param>
/// <returns></returns>
bool GetButtonUp(EKeyCode keyCode);

/// <summary>
/// 현재 프레임에 버튼이 떼었는지 체크한다.
/// </summary>
/// <param name="keyCode"></param>
/// <returns></returns>
bool GetButton(EKeyCode keyCode);