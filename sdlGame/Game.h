#pragma once
#include "WindowRenderer.h"
#include "Events.h"
#include"Entity.h"
#include"SDL_image.h"
#include"Grass.h"

#include"SDL.h"

class Game
{	
		
	
	bool play = false;
		

	public:
		WindowRenderer* windowrenderer;
		Events* eventsys;
		
		bool Init();
		void Run();
		void Quit();

};

