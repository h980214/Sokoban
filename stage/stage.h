#pragma once

///역활
/// 1. 스테이지 호출
/// 2. 현재상황보관
/// 3. 클리어여부

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

///스테이지를 로딩
void LoadStage(EStageLevel level);
