#pragma once
#include "raylib.h"
#include <cstdint>
class Init
{
public:
	Init();
	static uint32_t getWidth();
	static uint32_t getHeight();
	static const uint32_t WIDTH = 400;
	static const uint32_t HEIGHT = 800;
private:

  const char* TITLE;
	static const int FPS = 60;
};
