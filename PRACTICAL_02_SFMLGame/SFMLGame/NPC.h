#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"

using namespace std;

class NPC : public Character
{
public:
	NPC();
	~NPC();
	void initialize();
	void update();
	void draw(sf::RenderWindow* window);

private:
	sf::Texture m_NPCTexture;
	sf::Sprite m_NPCSprite;
};
#endif