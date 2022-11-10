#pragma once
#include "SDL_video.h"
#include"SDL.h"

class Window
{
private:
	SDL_Window* window;


	

public:

	Window();
	bool init();
	~Window();

	SDL_Window* getwin();

	void update();
	
};

