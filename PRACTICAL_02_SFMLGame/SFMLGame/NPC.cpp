#include <NPC.h>

NPC::NPC()
{
	if (m_NPCTexture.loadFromFile("npc1.png"))
	{
		m_NPCSprite.setTexture(m_NPCTexture);
		m_NPCSprite.setScale(0.6, 0.6);
	}
	else
	{
		cout << "Error loading Player texture" << endl;
	}
};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* window)
{
	cout << "NPC drawing" << endl;
	window->draw(m_NPCSprite);
}

sf::FloatRect NPC::getBounds()
{
	return m_NPCSprite.getGlobalBounds();
}