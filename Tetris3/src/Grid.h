#pragma once
#include "Init.h"
#include <array>
#include <iostream>
#include "ColorClass.h"
class Grid
{
public:
	Grid();
	void printGrid();
	void drawGrid(ColorClass* color);
private:
	static const uint32_t CELL_SIZE = 40;  //px
	std::array< std::array<int, Init::WIDTH / CELL_SIZE>, Init::HEIGHT / CELL_SIZE> grid;
	void initializeGrid();
	
};

