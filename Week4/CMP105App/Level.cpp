#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	

	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&playerTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	//player.handlePlayerInput(input);

}

// Update game objects
void Level::update(float dt)
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);

	endDraw();
}
