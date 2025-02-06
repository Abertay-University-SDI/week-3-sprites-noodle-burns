#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "InputEventFlags.h"

class Player : public GameObject
{
public:

	Player();
	~Player();

	void handlePlayerInput(float dt);
	void drawSprite();


private:

	//player objects
	GameObject playerObject;
	sf::Texture texture;


};

