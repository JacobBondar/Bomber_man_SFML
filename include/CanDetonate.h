#pragma once

#include "StaticObject.h"

class CanDetonate : public StaticObject
{
public:
	virtual ~CanDetonate() = 0;

	virtual bool gotHit(std::vector<sf::Sprite> boomAreas) = 0;

};