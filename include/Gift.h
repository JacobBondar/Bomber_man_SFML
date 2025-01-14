#pragma once

#include "CanDetonate.h"

class Gift : public CanDetonate
{
public:
	Gift() = default;
	virtual ~Gift() = default;

	virtual void draw(sf::RenderWindow& window) override;
	virtual bool gotHit(sf::Vector2f location) override;
	virtual sf::Vector2f getLocation() override;

	int getGiftType();
	void setType();

private:
	sf::Sprite m_picture;
	int m_type;

};