#include <Player.h>

Player::Player()
{
	if (m_playerTexture.loadFromFile("rayman.png"))
	{
		m_playerSprite.setTexture(m_playerTexture);
		m_playerSprite.setScale(0.40, 0.40);
		m_playerSprite.setPosition(400, 0);
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

sf::FloatRect Player::getBounds()
{
	return m_playerSprite.getGlobalBounds();
}