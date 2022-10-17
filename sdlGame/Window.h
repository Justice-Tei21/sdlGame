#pragma once
#include "SDL_video.h"
class Window
{
private:
	Window* instance = 0;


public:
	SDL_Window* window;

private:

	Window();

public:



	Window* getWindow() {
		if (instance == 0) {
			instance = new Window();
		}
	};
};

