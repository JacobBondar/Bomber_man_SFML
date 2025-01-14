#include "Bomb.h"

Bomb::Bomb(sf::Texture texture, sf::Vector2f loc) : m_count(4)
{
	m_picture.setTexture(texture);
	m_picture.setPosition(loc);
}

std::vector<sf::Sprite> Bomb::getRectangles(sf::RectangleShape bigRec)
{
	sf::Vector2f topLeft = bigRec.getPosition();
	sf::Vector2f bottomRight = getBottomRight(topLeft, bigRec.getSize());
	sf::Vector2f wantedPosition;
	sf::Texture tempTexture = *m_picture.getTexture();

	std::vector<sf::Sprite> spriteReturn;

	for (int i = 0; i < 5; i++)
	{
		sf::Sprite tempSprite;
		wantedPosition = getWantedPosition(topLeft, bottomRight, i);

		tempSprite.setPosition(wantedPosition);
		tempSprite.setTexture(tempTexture);

		spriteReturn.push_back(tempSprite);
	}

	return spriteReturn;
}

sf::Vector2f Bomb::getBottomRight(sf::Vector2f topLeft, sf::Vector2f size)
{
	sf::Vector2f wanted;
	wanted.x = topLeft.x + size.x;
	wanted.y = topLeft.y + size.y;

	return wanted;
}

sf::Vector2f Bomb::getWantedPosition(sf::Vector2f topLeft, sf::Vector2f bottomRight, int index)
{
	if (index == 0) return m_picture.getPosition();
	sf::Vector2f newPoint;

	if (index % 2 == 0) // X
	{
		newPoint.y = m_picture.getPosition().y;

		if ((index / 2) % 2 == 0) // 4
		{
			newPoint.x = m_picture.getPosition().x + 100;
			newPoint.x = updateCoordinates(bottomRight.x, newPoint.x, true);
		}

		else // 2
		{
			newPoint.x = m_picture.getPosition().x - 100;
			newPoint.x = updateCoordinates(bottomRight.x, newPoint.x, false);
		}
	}

	else // Y
	{
		newPoint.x = m_picture.getPosition().x;

		if (((index + 1) / 2) % 2 == 0) // 3
		{
			newPoint.y = m_picture.getPosition().y + 100;
			newPoint.y = updateCoordinates(bottomRight.y, newPoint.y, true);
		}

		else // 1
		{
			newPoint.y = m_picture.getPosition().y - 100;
			newPoint.y = updateCoordinates(bottomRight.y, newPoint.y, false);
		}
	}
	return newPoint;
}

int Bomb::updateCoordinates(int limit, int test, bool sign)
{
	if (test > limit && sign || test < limit && !sign)
	{
		return limit;
	}
	return test;
}