#pragma once
#include "Window.h"
class Game
{	
	private:
		Window* window;

	public:

		Game();
		bool Init();
		void Run();
		void Quit();

};

