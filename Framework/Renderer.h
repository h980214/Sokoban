#pragma once

#include <stdbool.h>

/// <summary>
///  �������� �ʱ�ȭ�Ѵ�.
/// </summary>
/// <returns>�ʱ�ȭ �����̸� true, �ƴϸ� false </returns>
bool InitializeRenderer();



/// <summary>
/// ���� �׸���
/// </summary>
void RenderMap();

void SetKeyMessage(int32_t keyCode);
