#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>

class Screen
{
public:
	virtual ~Screen() = default;

	virtual void drawScreen(sf::RenderWindow& window) = 0;

};