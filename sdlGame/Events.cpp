#include "Events.h"
#include <iostream>




bool Events::Init(bool*running) {
	this->exit = running;
	return exit;
}


void Events::Update() 
{

	while (SDL_PollEvent(&event) ){
		switch (event.type)
		{
		case SDL_QUIT:
		{
			*exit = false;
			break;
		}


		


		case SDL_KEYDOWN:
		{
			switch (event.key.keysym.sym) {
			case SDLK_0:
				std::cout << "yes ";
			}
			
		}



		}
	}

}