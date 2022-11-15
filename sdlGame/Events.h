#pragma once
#include"SDL_events.h"

class Events
{
private:
	bool* exit;


public:
	
	bool Init(bool* running);
	SDL_Event event;
	void Update();
	bool Exit();

};

