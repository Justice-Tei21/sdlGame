#include<iostream>
#include"SDL.h"



// need to add the .DLL of SDL
int main(int argc, char* args[]) {
	std::cout << "hello world\n";


	SDL_Event event;
	bool playing = true;

	if (SDL_Init(!SDL_INIT_VIDEO | SDL_INIT_EVENTS))
		std::cout << "video could not init";

	SDL_Window* Window = SDL_CreateWindow("hgame", 200, 200, 200, 200, 0);
	if (Window == NULL)
		std::cout << "Window empty 8/";
	else {
		SDL_Surface* screensurface = SDL_GetWindowSurface(Window);

		SDL_FillRect(screensurface, NULL, SDL_MapRGB(screensurface->format, 0xff, 0x00, 0xbf));

	}





	while (SDL_PollEvent(&event) || playing) {



		switch (event.type)
		{
		case SDL_QUIT:
		{
			playing = false;
			break;
		}



		case SDL_KEYDOWN:
		{playing = false; }


		}



		SDL_UpdateWindowSurface(Window);

	}


	SDL_DestroyWindow(Window);
	SDL_Quit();

	return 0;
}
