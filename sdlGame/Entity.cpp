#include "Entity.h"




Entity::Entity(WindowRenderer* _renderer, double _x=0, double _y=0)
	:x(_x),y(_y)
	{

	src.x = 600;
	src.y = 400;
	src.w = 32;
	src.h = 32;
	
	dst.x = 200;
	dst.y = 200;
	dst.h = 64;
	dst.w = 32;
	
	path = "res\\Image.png";


	this->renderer = _renderer;

	cur_texture = renderer->LoadTexture(path.c_str(), &src, &dst);


}

void Entity::update() {
	x = 5;

}


Entity::~Entity() {
	SDL_DestroyTexture(cur_texture);
	
}