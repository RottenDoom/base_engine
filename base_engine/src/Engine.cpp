#include "Engine.h"

void Engine::InitVariables()
{
	this->window = nullptr;
}

void Engine::InitWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 900;

	this->window = new sf::RenderWindow(this->videoMode, "GameDev");
}

void Engine::PollEvents()
{
	// Event Polling
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->event.key.code ==sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

Engine::Engine()
{
	this->InitVariables();
	this->InitWindow();
}

Engine::~Engine()
{
	delete this->window;
}

const bool Engine::IsRunning() const
{
	return this->window->isOpen();
}

void Engine::Update()
{
	this->PollEvents();
}

void Engine::Render()
{
	this->window->clear(sf::Color(0, 0, 0, 0));

	// Draw Here

	this->window->display();
}
