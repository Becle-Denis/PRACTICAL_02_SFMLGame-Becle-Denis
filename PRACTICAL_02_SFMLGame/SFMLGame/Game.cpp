#include <Game.h>
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		player->update();
		npc->update();
	}

	//check for collision 

	sf::FloatRect rect1 = player->getBounds();
	sf::FloatRect rect2 = npc->getBounds();

	if (rect1.intersects(rect2))
	{
		std::cout << "COLISION" << std::endl;
	}

}

void Game::draw()
{
	window->clear();
	//window->draw(shape);
	
	npc->draw(window);
	player->draw(window);
	window->display();
}


