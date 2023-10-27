#include "Elevator.h"

void Elevator::switchStatus()
{
	if (on_off)
	{
		on_off = false;
	}
	else
	{
		on_off = true;
	}
}

void Elevator::setCurentFloor(int floor)
{
	if (floor < bottom)
	{
		current = bottom;
	}
	else if (floor > top)
	{
		current = top;
	}
	else
	{
		current = floor;
	}
}
