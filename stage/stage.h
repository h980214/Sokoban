#pragma once

///��Ȱ
/// 1. �������� ȣ��
/// 2. �����Ȳ����
/// 3. Ŭ�����

typedef enum MapType
{
	MAPTYPE_WALL = '#',
	MAPTYPE_PLAYER = 'P',
	MAPTYPE_BOX = 'a',
	MAPTYPE_GOAL = 'O',
	MAPTYPE_BOX_ON_GAOL = '@',
	MAPTYPE_PATH = ' ',

} EMapType;

typedef enum StageLevel
{
	STAGE_01 = 1,
    STAGE_MAX,
} EStageLevel;

///���������� �ε�
void LoadStage(EStageLevel level);
