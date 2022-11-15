#include "Game.h"
#include"SDL.h"
#include "Window.h"





bool Game::Init() {

	bool success = true;
	if (SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO)) {
		success = false;
	}
	else 
	{
		this->window = new Window();
		
		window->init();
		SDL_Window* real_window = window->getwin();

		SDL_FillRect(window->getsurf(), NULL, SDL_MapRGB(window->getsurf()->format, 0x87, 0xce, 0xeb));

	}
	return success;

}

void Game::Run() {
	bool play = true;


	while (play) 
	{
		window->update();
	}

	window->~Window();
}