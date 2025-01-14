#include "Stone.h"

Stone::Stone(sf::Texture texture, sf::Vector2f loc)
{
	m_picture.setTexture(texture);
	m_picture.setPosition(loc);
}

void Stone::draw(sf::RenderWindow& window)
{
	window.draw(m_picture);
}

bool Stone::gotHit(std::vector<sf::Sprite> boomAreas)
{
	for (int boomArea = 0; boomArea < 5; boomArea++)
	{
		if (boomAreas[boomArea].getGlobalBounds().intersects(m_picture.getGlobalBounds()))
		{
			return true;
		}
	}
	return false;
}

bool Stone::doesContain(sf::Vector2f loc)
{
	return m_picture.getGlobalBounds().contains(loc);
}