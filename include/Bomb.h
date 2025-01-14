#pragma once
#include "CantDetonate.h"

class Bomb : public CantDetonate
{
public:
	Bomb(sf::Texture texture, sf::Vector2f loc);
	virtual ~Bomb() = default;

	void draw(sf::RenderWindow& window);
	int getTime() const;
	void reducePicture();
	std::vector <sf::Sprite> getRectangles(sf::RectangleShape bigRec);

private:
	sf::Sprite m_picture;
	int m_count;

	sf::Vector2f getBottomRight(sf::Vector2f topLeft, sf::Vector2f size);
	sf::Vector2f getWantedPosition(sf::Vector2f topLeft, sf::Vector2f bottomRight, int index);
	int updateCoordinates(int limit, int test, bool sign);
};