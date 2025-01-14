#pragma once

#include "MovingObject.h"

class Guard : public MovingObject
{
public:
    Guard() = default;
    virtual ~Guard() = default;

    virtual void draw(sf::RenderWindow& window) override;
    virtual void move() override;
    virtual bool gotHit(sf::Vector2f location) override;
    virtual sf::Vector2f getLocation();
    virtual void setOgLocation(sf::Vector2f location) override;

private:
    sf::Sprite m_picture;
    sf::Vector2f m_ogLocation;

};
