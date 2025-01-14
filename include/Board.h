#pragma once
#include <SFML/Graphics.hpp>

class Board
{
public:
	Board(sf::Vector2f point, sf::Vector2f size); // mb erase point

	void setNewBoard(sf::Vector2f );

private:
	sf::RectangleShape m_board;
};