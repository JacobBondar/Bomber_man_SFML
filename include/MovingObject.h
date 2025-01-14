#pragma once

#include "GameObject.h"

class MovingObject : public GameObject
{
public:
    virtual void move() = 0;
    virtual bool gotHit(sf::Vector2f location) = 0;
    virtual void setOgLocation(sf::Vector2f location) = 0;

    virtual ~MovingObject() = default;
};
