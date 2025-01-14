#pragma once

#include <SFML/Graphics.hpp>
#include "string.h"

class Button
{
public:
	Button(sf::Texture texture ,std::string name, sf::Vector2f loc);

	void draw(sf::RenderWindow& window) const;
	std::string getName() const;
	bool clickedOnButton(sf::Vector2f locClick);

private:
	sf::Sprite m_picture;
	std::string m_name;

};