#pragma once
#include <iostream>

using namespace std;

class Elevator {
	bool on_off;
	int top;
	int bottom;
	int current;


public:
	Elevator(int pTop, int pBottom) : on_off{ false }, top{ pTop }, bottom{ pBottom }, current{ 0 } {}; //инициализация


	bool getStatus()
	{
		return on_off;
	}
	int getCurentFloor()
	{
		return current;
	}
	int getBottomFloor()
	{
		return bottom;
	}
	int getTopFloor()
	{
		return top;
	}

	void switchStatus();

	void setCurentFloor(int floor);


};