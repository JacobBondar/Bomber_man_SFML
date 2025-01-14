#include "Button.h"

Button::Button(sf::Texture texture, std::string name, sf::Vector2f loc) 
	: m_name(name)
{
	m_picture.setTexture(texture);
	m_picture.setPosition(loc);
}

void Button::draw(sf::RenderWindow& window) const
{
	window.draw(m_picture);
}

std::string Button::getName() const
{
	std::string tempName = m_name;
	return tempName;
}

bool Button::clickedOnButton(sf::Vector2f locClick)
{
	return m_picture.getGlobalBounds().contains(locClick);
}