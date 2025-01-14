#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Texture
{
public:
    Texture(sf::Texture texture, std::string);
    sf::Sprite getSprite() const;
    std::string getName() const;
    
private:
    sf::Texture m_texture;
    std::string m_name;

};
