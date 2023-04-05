#pragma once
#include <string>
using namespace std;

class lift
{
private:
	int lowFloor;
	int highFloor;
	int currentFloor;
	bool status;
public:
	lift();
	lift(int lowFloor, int highFloor);
	lift(int lowFloor, int highFloor, int currentFloor, bool status);
	bool isStatus();
	int getFloor();
	string info();
	void onOff();
	int call(int floor);
};


