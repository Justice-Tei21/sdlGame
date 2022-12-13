#pragma once
#include"SDL.h"
#include"SDL_video.h"
#include"SDL_render.h"
#include"SDL_image.h"



class WindowRenderer
{
	

public:
	
	
	
	bool Init();
	void Quit();
	void update();
	SDL_Texture* LoadTexture(const char*path,SDL_Rect *src,SDL_Rect *dst);
	

private:



public:
	SDL_Surface* winsurface;
	SDL_Window* windowrenderer;
	SDL_Renderer* renderer;
	SDL_Texture* texture;
	
	
};

