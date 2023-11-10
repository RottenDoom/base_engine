#pragma once
#include <iostream>
#include <ctime>

#include <SFML/Graphics.hpp>


class Engine
{
private:
	// Window Setup
	sf::VideoMode videoMode;
	sf::RenderWindow* window;

	// Events setup
	sf::Event event;

	// Variable Initialisation Functions
	void InitVariables();
	void InitWindow();

	// Private Functions
	void PollEvents();


public:
	Engine();
	virtual ~Engine();

	// Accessor
	const bool IsRunning() const;

	// Main Loop Functions
	void Update();
	void Render();
};

