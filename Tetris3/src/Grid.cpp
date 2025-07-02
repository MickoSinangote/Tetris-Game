#include "Grid.h"

Grid::Grid()
{
	initializeGrid();

}

void Grid::initializeGrid()
{
	for (size_t i = 0; i < grid.size(); i++)
	{
		for (size_t j = 0; j < grid.at(i).size(); j++)
		{
			grid.at(i).at(j) = 0;
		}
	}
}
void Grid::printGrid() 
{
	for (size_t i = 0; i < grid.size(); i++)
	{
		for (size_t j = 0; j < grid.at(i).size(); j++)
		{
			std::cout << grid.at(i).at(j);
		}
		std::cout << '\n';
	}
}
void Grid::drawGrid(ColorClass* color)
{
	for (size_t i = 0; i < grid.size(); i++)
	{
		for (size_t j = 0; j < grid.at(i).size(); j++)
		{
			DrawRectangle(j*CELL_SIZE + 1, i*CELL_SIZE + 1, CELL_SIZE - 1, CELL_SIZE - 1, color->getColors(0));
		}
	}
}
