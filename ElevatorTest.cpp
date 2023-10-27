#include "ElevatorTest.h"
#include <iostream>

using namespace std;

void ElevatorTest::startAllTest()
{
	cout << "Проверка функции switchStatus() " << endl;
	testOnOff();
	cout << "Проверка функции setCurentFloor() " << endl;
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
		cout << "Функция переключения статуса работает корректно" << endl;
	}
	else
	{
		cout << "ОШИБКА!!! Функция переключения статуса работает НЕ корректно!!!" << endl;
	}
}

void ElevatorTest::testSetCurentFloorLessBottom()
{

	int current = elevator.getBottomFloor();
	current -= 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getBottomFloor())
	{
		cout << "Ниже доступного не опустился" << endl;
	}
	else
	{
		cout << "ОШИБКА - опустились ниже минимума " << endl;
	}
}
void ElevatorTest::testSetCurentFloorLessTop()
{

	int current = elevator.getTopFloor();
	current += 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getTopFloor())
	{
		cout << "Выше доступного не поднялись" << endl;
	}
	else
	{
		cout << "ОШИБКА - улетели в небо! " << endl;
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
		cout << "Этаж присвоился корректно! " << endl;
	}
	else
	{
		cout << "ОШИБКА - Этаж присвоился НЕ корректно!!! " << endl;
	}
}
	




