#include <iostream>
using namespace std;
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main()
{

	int wallet1 = 300;
	int wallet2 = 250;
	cout << " wallet1 = " << wallet1;
	cout << ", wallet2 = " << wallet2 << endl;
	
	
	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);	
	cout << " wallet1 = " << wallet1;
	cout << ", wallet2 = " << wallet2 << endl;

	cout << "Using pointers to swap contents:\n";
        swapp(&wallet1, &wallet2);
        cout << " wallet1 = " << wallet1;
        cout << ", wallet2 = " << wallet2 << endl;

	cout << "Using values to swap contents:\n";
        swapv(wallet1, wallet2);
        cout << " wallet1 = " << wallet1;
        cout << ", wallet2 = " << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b)
{
	int temp = a;
	a = b;
 	b = temp;
}

void swapp(int * p, int * q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
