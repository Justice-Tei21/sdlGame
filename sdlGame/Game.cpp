#include "Game.h"
#include"SDL.h"


bool Game::Init() {

	bool success = true;
	if (SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO)) {
		success = false;
	}

	return success;

}