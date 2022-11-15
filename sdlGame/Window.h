#pragma once
#include "SDL_video.h"




class Window
{
	

public:

	Window();
	bool init();
	void Quit();
	void update();



public:
	SDL_Window* getwin();
	SDL_Surface* getsurf();


private:
	SDL_Surface* winsurface;
	SDL_Window* window;




	
};

