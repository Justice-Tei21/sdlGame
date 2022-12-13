#include "WindowRenderer.h"







void WindowRenderer::Quit() 
{
	SDL_DestroyWindow(this->windowrenderer);
	
	
	
}




void WindowRenderer::update() 
{
	//SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

}
bool WindowRenderer::Init()
{

	bool success = true;

	windowrenderer = SDL_CreateWindow("agame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	renderer = SDL_CreateRenderer(windowrenderer, 0, SDL_RENDERER_ACCELERATED);
	this->winsurface = SDL_GetWindowSurface(windowrenderer);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_ADD);

	if (windowrenderer == NULL)
		success = false;

	return success;
}

SDL_Texture* WindowRenderer::LoadTexture(const char* path, SDL_Rect* src, SDL_Rect* dst) 
{

	SDL_Texture* toreturn = IMG_LoadTexture(renderer, path);
	SDL_RenderCopy(renderer, toreturn, src, dst);


	return toreturn;


}

