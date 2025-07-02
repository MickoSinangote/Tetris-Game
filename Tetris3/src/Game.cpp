#include "Game.h"

Game::Game()
{
	Init init;
	gameLoop();
}

Game::~Game()
{
	CloseWindow();
}
void Game::gameLoop()
{
	Grid grid;
	grid.printGrid();
	while (!WindowShouldClose())
	{
		BeginDrawing();
		
		ClearBackground(RED);
		grid.drawGrid(&color);
		
		
		EndDrawing();

	}
}