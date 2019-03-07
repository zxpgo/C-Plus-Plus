#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Nest two number(q to quit): ";
	}
	return 0;
}

