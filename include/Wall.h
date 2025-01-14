#pragma once

#include "CantDetonate.h"

class Wall : public CantDetonate
{
public:
	Wall() = default;
	virtual ~Wall() = default;

	virtual void draw(sf::RenderWindow& window) override;
	virtual sf::Vector2f getLocation() override;

private:
	sf::Sprite m_picture;

};