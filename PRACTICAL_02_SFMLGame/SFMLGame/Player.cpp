#include <Player.h>

Player::Player()
{
	if (m_playerTexture.loadFromFile("rayman.png"))
	{
		m_playerSprite.setTexture(m_playerTexture);
		m_playerSprite.setScale(0.5, 0.5);
	}
	else
	{
		cout << "Error loading Player texture" << endl;
	}
};
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;
}
void Player::update()
{
	cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* window)
{
	cout << "Player drawing" << endl;
	window->draw(m_playerSprite);
}