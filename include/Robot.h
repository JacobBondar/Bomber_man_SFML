#pragma once

#include "MovingObject.h"

class Robot : public MovingObject
{
public:
    Robot() = default;
    virtual ~Robot() = default;

    virtual void draw(sf::RenderWindow& window) override;
    virtual void move() override;
    virtual bool gotHit(sf::Vector2f location) override;
    virtual sf::Vector2f getLocation() override;
    virtual void setOgLocation(sf::Vector2f location) override;

    bool didWin(sf::Vector2f location);
    bool isDead();
    void updateLife(int value);

private:
    int m_lives;
    int m_points;
    sf::Sprite m_picture;
    sf::Vector2f m_ogLocation;

};
