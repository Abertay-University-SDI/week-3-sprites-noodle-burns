#include "Player.h"

Player::Player() {


	//initial player object

	//playerObject.setInput(input);


	//setting sprite texture



	/*texture.loadFromFile("gfx/Mushroom.png");

	playerObject.setTexture(&texture);
	playerObject.setSize(sf::Vector2f(50, 50));
	playerObject.setPosition(10, 10);*/
	
}

Player::~Player() {

}


void Player::handleInput(float dt , Input* input) {

	//player move using wasd
	sf::Vector2i currentPos = sf::Vector2i(playerObject.getPosition());

	if (input->isKeyDown(sf::Keyboard::W)) {
		currentPos.y -= 2;
		std::cout << "W\n";
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		currentPos.x -= 2;
		std::cout << "A\n";
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		currentPos.y += 2;
		std::cout << "S\n";
	}
	if (input->isKeyDown(sf::Keyboard::D)) {
		currentPos.x += 2;
		std::cout << "D\n";
	}

	//playerObject.setPosition(currentPos.x, currentPos.y);

}

void Player::update(float dt) {

}



void Player::drawSprite() {

	window->draw(playerObject);
}