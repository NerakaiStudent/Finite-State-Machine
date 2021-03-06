#pragma once
#include <iostream>
#include "Animation.h"

class State
{

public:
	State();
	~State();
	virtual void idle(Animation* a);
	virtual void shoveling(Animation* a);
	virtual void hammering(Animation* a);
	virtual void walking(Animation* a);
	virtual void jumping(Animation* a);
	virtual void swording(Animation* a);

	virtual void render(sf::RenderWindow & window);
};