#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();
	void initialize();
	void update();
	void draw(sf::RenderWindow* window);

private:
	sf::Texture m_playerTexture;
	sf::Sprite m_playerSprite;
};
#endif