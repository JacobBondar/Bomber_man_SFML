#pragma once

#include "Screen.h"

class HelpScreen : Screen
{
public:
	HelpScreen();

	virtual void drawScreen(sf::RenderWindow& window) override;
};