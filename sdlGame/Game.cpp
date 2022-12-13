#include "Game.h"








bool Game::Init() {

	bool success = true;
	int img_flag = IMG_INIT_PNG;
	if (SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO)) {
		success = false;
	}
	else 
	{
		IMG_Init(img_flag) && !img_flag;
		windowrenderer = new WindowRenderer();
		eventsys = new Events();
		
		
		
		windowrenderer->Init();
		eventsys->Init(&play);
		



		SDL_Window* real_window = windowrenderer->windowrenderer;
		SDL_Surface* real_surf = windowrenderer->winsurface;


		

	}
	return success;

}

void Game::Run() {
	play = true;
	Entity* player = new Entity(windowrenderer,200,500);
	Entity* grass = new Grass(windowrenderer,0,0);
	
	

	while (play) 
	{	
		
		eventsys->Update();
		windowrenderer->update();
		
		
	}

	windowrenderer->Quit();
}

void Game::Quit() {
	windowrenderer->Quit();


	SDL_Quit();
	IMG_Quit();
}