#include <iostream>
using namespace std;
int main()
{
	double prices[5] = {4.99, 10.99, 1.99, 7.99, 8.99};
	for (double x: prices)
		cout << x << endl;
	for (int x : {3, 5, 2, 6})
		cout << x << " ";
	cout << endl;
	return 0;
}
