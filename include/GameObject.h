#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
public:
    virtual void draw(sf::RenderWindow& window) = 0;
    virtual sf::Vector2f getLocation() = 0;

    virtual ~GameObject() = default;
};