#include<iostream>
#include"Game.h"




// need to add the .DLL of SDL
int main(int argc, char* args[]) {
	std::cout << "hello world\n";

	Game* thegame = new Game();
	

	thegame->Init();

	thegame->Run();

	thegame->Quit();



	/*Window* truewindow = new Window();


	
	SDL_Event event;
	bool playing = true;

	if (SDL_Init(SDL_INIT_VIDEO)) {
		std::cout << "video could not init"; return 1;}

	SDL_Window* window = truewindow->getwin();
	

	SDL_Surface* screensurface = SDL_GetWindowSurface(window);

	SDL_FillRect(screensurface, NULL, SDL_MapRGB(screensurface->format, 0x87, 0xce, 0xeb));
	
	
	
	




	while (SDL_PollEvent(&event) || playing) {



		switch (event.type)
		{
		case SDL_QUIT:
		{
			playing = false;
			break;
		}



		case SDL_KEYDOWN:
		{
			switch (event.key.keysym.sym) {
			case SDLK_0:
				std::cout << "yes";
			}

			
		}


		}



		SDL_UpdateWindowSurface(window);

	}


	SDL_DestroyWindow(window);
	SDL_Quit();*/

	return 0;
}
