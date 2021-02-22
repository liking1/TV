#include "Remote.h"

Remote& Remote::operator++()
{
	tv->nextChannel();
	return *this;
}

Remote& Remote::operator--()
{
	tv->prevChannel();
	return *this;
}

void Remote::power()
{
	if (tv->state)
		tv->state = false;
	else
		tv->state = true;
}

void Remote::incVolume()
{
	if (tv->state) {
		tv->volume++;
	}
	else {
		cout << "ERROR!" << endl;
	}
}

void Remote::decVolume()
{
	if (tv->state) {
		tv->volume--;
	}
	else {
		cout << "ERROR!" << endl;
	}
}

void Remote::goToChannel(const int& channel)
{
	if (tv->state) {
		for (int i = 0; i != channel; i++)
		{
			tv->nextChannel();
		}
	}
	else {
		cout << "ERROR!" << endl;
	}
}