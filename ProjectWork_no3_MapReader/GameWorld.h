#pragma once
#include "GameTile.h"
#include <vector>
class GameWorld
{
public:
	GameWorld(int);
	~GameWorld();
	int viewDistance;
	sf::RenderWindow* window;
	std::vector<GameTile*> tiles;
	sf::Vector2i center;
	void readFromMap();
	void drawInRenege();


private:

};