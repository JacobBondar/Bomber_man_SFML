#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Sound
{
public:
	Sound(sf::SoundBuffer sound);
	~Sound() = default;

	sf::Sound getSound();

private:
	sf::SoundBuffer m_sound;
};