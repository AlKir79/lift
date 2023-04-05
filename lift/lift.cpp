#include "lift.h"
#include <iostream>

lift::lift()
{
	this->lowFloor = 0;
	this->highFloor = 10;
	this->currentFloor = this->highFloor;
	this->status = false;

}

bool lift::isStatus()
{
	return status;
}

int lift::getFloor()
{
	return currentFloor;
}

string lift::info()
{
	string s;
	s.append("этаж ");
	s += (to_string(this->getFloor()));
	s.append(" статус ");
	if (isStatus()) {
		s.append("вкл.");
	}
	else {
		s.append("выкл.");
	}
	return s;
}

void lift::onOff()
{
	this->status = !this->status;
}

int lift::call(int floor)
{
	if (!(floor >= lowFloor && floor <= highFloor)) {
		return(-1);
	}
	if (floor < currentFloor) {
		for (; currentFloor > floor; currentFloor--) {
			cout << info() << endl;
		}
	}
	else {
		for (currentFloor; currentFloor < floor; currentFloor++) {
			cout << info() << endl;
		}
	}
	return 0;
}


lift::lift(int lowFloor, int highFloor)
{
	this->lowFloor = lowFloor;
	this->highFloor = highFloor;
	this->currentFloor = this->highFloor;
	this->status = false;

}

lift::lift(int lowFloor, int highFloor, int currentFloor, bool status)
{
	this->lowFloor = lowFloor;
	this->highFloor = highFloor;
	this->currentFloor = this->highFloor;
	this->status = false;

}
