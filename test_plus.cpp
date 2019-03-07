#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int guest = 0;
	int y;
	while (guest++ < 10)
		cout << guest << endl;
	y = (4 + a++) + (6 + a++);
	cout << y << endl;
	return 0;
}
