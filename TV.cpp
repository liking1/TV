#include "TV.h"
#include <iostream>

void TV::power()
{
	if (state)
		state = false;
	else
		state = true;
}

void TV::nextChannel()
{
	if (state == true && currChannel < maxChannel)
	{
		currChannel++;
	}
	else
		cout << "ERROR!" << endl;
}

void TV::prevChannel()
{
	if (state == true && currChannel > 0)
		currChannel--;
	else
		cout << "ERROR!" << endl;
}

void TV::incVolume()
{
	if (state == true && volume < maxVolume)
		volume++;
	else if (!state)
		cout << "TV is off!" << endl;
	else if (volume == maxVolume)
		cout << "Max volume" << endl;
}

void TV::decVolume()
{
	if (state == true && volume > minVolume)
		volume--;
	else if (!state)
		cout << "TV is off!" << endl;
	else if (volume == minVolume)
		cout << "Min volume!" << endl;
}

void TV::print() const
{
	if (state == 1)
	{
		cout << "Number of channels : " << maxChannel << endl;
		cout << "Current channel : " << currChannel << endl;
		cout << "Max volume : " << maxVolume << endl;
		cout << "Min volume : " << minVolume << endl;
		cout << "TV is off!" << endl;
	}
	else if (!state)
	{
		cout << "Current channel : " << currChannel << endl;
		cout << "Volume : " << volume << endl;
		cout << "TV is working!!" << endl;
	}
}