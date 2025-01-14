#pragma once

#include "CanDetonate.h"

class Stone : public CanDetonate
{
public:
	Stone(sf::Texture texture, sf::Vector2f loc);

	virtual void draw(sf::RenderWindow& window) override;
	virtual bool gotHit(std::vector<sf::Sprite> boomAreas) override;
	//virtual sf::Vector2f getLocation() override;
	bool doesContain(sf::Vector2f loc);

private:
	sf::Sprite m_picture;

};