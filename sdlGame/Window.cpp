#include "Window.h"


Window::Window() {

	
	window = SDL_CreateWindow("agame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
}


Window::~Window() {
	
}


SDL_Window * Window::getwin() {
	return window;
}

void Window::update() {

}
bool Window::init() {
	if (SDL_Init(s) {

	}
}