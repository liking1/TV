#include <iostream>
#include "TV.h"
#include "Remote.h"

using namespace std;
int main()
{
	TV tv(100);
	tv.power();
	tv.incVolume();
	tv.decVolume();
	tv.nextChannel();
	tv.print();
}