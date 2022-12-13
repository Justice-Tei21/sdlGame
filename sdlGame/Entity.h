#pragma once


#include"SDL.h"
#include"SDL_image.h"
#include"WindowRenderer.h"
#include<string>




class Entity
{	
public:

	//used to access the entities position
	double x;
	double y;
	
	//the box for where the object will interact with other
	SDL_Rect hitbox;
	std::string path;
	//src is which part of the texture that should be copied
	SDL_Rect src;
	//dst is which section of the image that the texture should occupy
	SDL_Rect dst;
	//the texture which should be copied from.
	SDL_Texture * cur_texture;

	WindowRenderer* renderer;

public:
	Entity(WindowRenderer *renderer,double x,double y);
	void virtual update();
	~Entity();
	

};

