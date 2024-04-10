//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "Money.h"
#include "Object.h"
#include <iostream>

using namespace std;

int main() 
{
	Money t;
	Money mon1;
	Money mon;
	Money mon2(mon);
	Money mon3(mon2);
	int d;
	cout << " Hryvni = "; cin >> d;
	t.SetHr(d);
	cout << " Kopijky = "; cin >> d;
	t.SetKop(d);
	Money add;
	add = mon1 + mon2;
	cout << "Add: " << add << endl;

	cout << "mon1 sum devide by 2: " << mon2 / mon3 << endl;

	cout << "mon2/mon3 = " << mon1 / 2 << endl;

	cout << "count = " << Money::Count() << endl;
	cout << "count = " << Object::Count() << endl;

	return 0;
}
