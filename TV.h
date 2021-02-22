#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class TV
{
public:
	
	TV(int maxCh)
		:maxChannel(maxCh)
	{}
	TV(bool state)
		:state(state)
	{}
	void power();
	void nextChannel();
	void prevChannel();
	void incVolume();
	void decVolume();
	void print() const;
private:
	friend class Remote;
	size_t volume = 0;
	size_t currChannel = 1 + rand() % (maxChannel);
	bool state = false;
	const int maxChannel = 100;
	const size_t maxVolume = 100;
	const size_t minVolume = 0;
};