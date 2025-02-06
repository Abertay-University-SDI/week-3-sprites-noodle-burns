#include "Player.h"

Player::Player() {

	//initial player object

	playerObject.setInput(input);


	//setting sprite texture



	/*texture.loadFromFile("gfx/Mushroom.png");

	playerObject.setTexture(&texture);
	playerObject.setSize(sf::Vector2f(50, 50));
	playerObject.setPosition(10, 10);*/
	
}

Player::~Player() {

}



void Player::handlePlayerInput(float dt) {

	sf::Vector2i currentPos = sf::Vector2i(playerObject.getPosition());

	if (input->isKeyDown(sf::Keyboard::W)) {
		currentPos.y += 2;
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		currentPos.x -= 2;
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		currentPos.y -= 2;
	}
	if (input->isKeyDown(sf::Keyboard::D)) {
		currentPos.x += 2;
	}

	playerObject.setPosition(currentPos.x, currentPos.y);
}


void Player::drawSprite() {

	window->draw(playerObject);
}