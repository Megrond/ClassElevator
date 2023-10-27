#pragma once
#include "Elevator.h"

class ElevatorTest {
	Elevator elevator;

public:
	ElevatorTest(Elevator p_elevator) : elevator{ p_elevator } {};

	void testOnOff();
	void testSetCurentFloorLessBottom();
	void testSetCurentFloorLessTop();
	void testSetCurentFloor();

	void startAllTest();
};

