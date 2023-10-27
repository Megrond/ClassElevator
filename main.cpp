#include<iostream>
#include<Windows.h>
#include <iomanip>
#include "Elevator.h"
#include "ElevatorTest.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "");

	Elevator elev{ 100, 0 };
	ElevatorTest elev_test{ elev };

	elev_test.startAllTest();
	elev.setCurentFloor(2);

	return 0;
}
