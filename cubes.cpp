#include <iostream>
double cube(double a);
double refcube(double &ra);
using namespace std;
int main()
{
	double x = 3.0;
	cout << &x << endl;
	cout << cube(x) <<  " = cube of " << x << endl;
	cout << refcube(x) << " = cube of " ;
	cout << x << endl;
	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double &ra)
{
	ra *= ra * ra;
	return ra;
}
