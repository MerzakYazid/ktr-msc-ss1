#pragma once

class Movable  
{
public:
	virtual void moveRight() = 0;
	virtual void moveLeft() = 0;
	virtual void moveForward() = 0;
	virtual void moveBack() = 0;
};

