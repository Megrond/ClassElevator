#include "ElevatorTest.h"
#include <iostream>

using namespace std;

void ElevatorTest::startAllTest()
{
	cout << "�������� ������� switchStatus() " << endl;
	testOnOff();
	cout << "�������� ������� setCurentFloor() " << endl;
	testSetCurentFloorLessBottom();
	testSetCurentFloorLessTop();
	testSetCurentFloor();
}

void ElevatorTest::testOnOff()
{
	bool curent_status = elevator.getStatus();
	elevator.switchStatus();

	if (curent_status != elevator.getStatus())
	{
		cout << "������� ������������ ������� �������� ���������" << endl;
	}
	else
	{
		cout << "������!!! ������� ������������ ������� �������� �� ���������!!!" << endl;
	}
}

void ElevatorTest::testSetCurentFloorLessBottom()
{

	int current = elevator.getBottomFloor();
	current -= 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getBottomFloor())
	{
		cout << "���� ���������� �� ���������" << endl;
	}
	else
	{
		cout << "������ - ���������� ���� �������� " << endl;
	}
}
void ElevatorTest::testSetCurentFloorLessTop()
{

	int current = elevator.getTopFloor();
	current += 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getTopFloor())
	{
		cout << "���� ���������� �� ���������" << endl;
	}
	else
	{
		cout << "������ - ������� � ����! " << endl;
	}
}

void ElevatorTest::testSetCurentFloor()
{
	int value = 2 ;
	if (elevator.getCurentFloor() == value) 
	{
		value++;
	}

	elevator.setCurentFloor(value);

	if (elevator.getCurentFloor() == value)
	{
		cout << "���� ���������� ���������! " << endl;
	}
	else
	{
		cout << "������ - ���� ���������� �� ���������!!! " << endl;
	}
}
	




