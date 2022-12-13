#include"Grass.h"

Grass::Grass(WindowRenderer* renderer, double x, double y):Entity(renderer,	 x,  y) {

	src.x = 200;
	src.y = 200;

	dst.x = 000;
	
	SDL_RenderCopy(renderer->renderer, cur_texture, &src, &dst);

}