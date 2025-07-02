#pragma once
#include "raylib.h"
#include <array>
class ColorClass
{
public:
	ColorClass();
	Color getColors(uint8_t id);
	std::array<Color, 8> allColors;
	
private:
	void setColors();
	
};
