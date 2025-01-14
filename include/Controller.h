#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "GameObject.h"
#include "MovingObject.h"
#include "CanDetonate.h"
#include "Texture.h"
#include "Board.h"

class Controller
{
public:
	Controller();
	void run();

private:
	sf::RenderWindow m_window;
	sf::RectangleShape m_board;

	std::vector <GameObject*> m_allObjects;
	std::vector <MovingObject*> m_movingObjects;
	std::vector <CanDetonate*> m_detonateObjects;
	std::vector <Texture> m_textures;

	Board m_board;
};

