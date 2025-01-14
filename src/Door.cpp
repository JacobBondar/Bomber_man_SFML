#include "Door.h"

Door::Door(sf::Texture texture, sf::Vector2f loc)
{
	m_picture.setTexture(texture);
	m_picture.setPosition(loc);
}

void Door::draw(sf::RenderWindow& window)
{
	window.draw(m_picture);
}

sf::Vector2f Door::getLocation()
{
	return m_picture.getPosition();
}

bool Door::doesContain(sf::Vector2f loc)
{
	return m_picture.getGlobalBounds().contains(loc);
}
