#pragma once
#include "Init.h"
#include "ColorClass.h"
#include "Grid.h"

class Game
{
public:
	Game();
	~Game();
	void gameLoop();
private:
	ColorClass color;
};
