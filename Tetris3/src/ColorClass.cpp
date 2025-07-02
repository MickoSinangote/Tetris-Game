#include "ColorClass.h"

ColorClass::ColorClass()
{
	setColors();
}
void ColorClass::setColors()
{
	ColorClass::allColors.at(0) = Color{ 37, 42, 48, 255 };     //BG
	ColorClass::allColors.at(1) = Color{ 255, 60, 0, 255 };     // 1
	ColorClass::allColors.at(2) = Color{ 255, 212, 69, 255 };   // 2
	ColorClass::allColors.at(3) = Color{ 113, 240, 29, 255 };		// 3
	ColorClass::allColors.at(4) = Color{ 29, 240, 85, 255 };		// 4
	ColorClass::allColors.at(5) = Color{ 18, 198, 230, 255 };		// 5
	ColorClass::allColors.at(6) = Color{ 24, 20, 227, 255 };		// 6
	ColorClass::allColors.at(7) = Color{ 214, 6, 214, 255 };		// 7
}
Color ColorClass::getColors(uint8_t id)
{
	return allColors.at(id);
}