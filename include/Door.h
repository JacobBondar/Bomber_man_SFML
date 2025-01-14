#pragma once

#include "CantDetonate.h"

class Door : public CantDetonate
{
public:
	Door(sf::Texture texture, sf::Vector2f loc);

	virtual void draw(sf::RenderWindow& window) override;
	virtual sf::Vector2f getLocation() override;
	bool doesContain(sf::Vector2f loc);

private:
	sf::Sprite m_picture;

};