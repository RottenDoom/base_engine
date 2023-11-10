#include "Engine.h"

int main()
{
	Engine game;

	while (game.IsRunning())
	{

		// Update 
		game.Update();

		// Rander 
		game.Render();
	}
	return 0;
}