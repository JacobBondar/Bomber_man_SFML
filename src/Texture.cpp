#include "Texture.h"

Texture::Texture(sf::Texture texture, std::string name) 
	: m_texture(texture), m_name(name) {}

std::string Texture::getName() const
{
	std::string tempName = m_name;
	return tempName;
}

sf::Sprite Texture::getSprite() const
{
	sf::Sprite pic(m_texture);
	return pic;
}