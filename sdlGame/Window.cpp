#include "Window.h"





Window::Window() {

	
	window = SDL_CreateWindow("agame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
}


void Window::Quit() {
	SDL_DestroyWindow(this->window);
	
	
}


SDL_Window * Window::getwin() {
	return window;
}

SDL_Surface* Window::getsurf() {
	return this->winsurface;
}

void Window::update() {

}
bool Window::init() {
	bool success = true;

	window = SDL_CreateWindow("agame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	winsurface = SDL_GetWindowSurface(window);
	
	if (window == NULL)
		success = false;

	return success;
}
