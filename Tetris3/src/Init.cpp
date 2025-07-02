#include "Init.h"

Init::Init()
{
	TITLE = "Tetris";
	InitWindow(WIDTH, HEIGHT, TITLE);
	SetTargetFPS(FPS);
}

 uint32_t Init::getWidth()
{
	return WIDTH;
}

 uint32_t Init::getHeight()
{
	return HEIGHT;
}