#pragma once
#include <iostream>
#include "TV.h"

using namespace std;
class Remote
{
public:
	Remote(TV* tv)
		:tv(tv)
	{}
	Remote& operator++();
	Remote& operator--();
	void power();
	void incVolume();
	void decVolume();
	void goToChannel(const int& channel);
private:
	TV* tv;
};
