#pragma once

#include "Screen.h"
#include "Button.h"
#include "vector"

class MenuScreen : Screen
{
public:
	MenuScreen();
	virtual ~MenuScreen() = default;

	virtual void drawScreen(sf::RenderWindow& window) override;

private:
	std::vector <Button> m_buttons;

};