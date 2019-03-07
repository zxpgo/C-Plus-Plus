#include <iostream>
using namespace std;
void oil(int x);

int main()
{
	int texas = 31;
	int year = 2018;
	cout << "In main(), texas = " << texas << ", &texas = "<< &texas << endl;
	oil(texas);	
	cout << "In main(), texas = " << texas << ", &texas = "<< &texas << endl;
	return 0;
}

void oil(int x)
{
	int texas = 5;
	cout << "In oil(), texas = " << texas << ", &texas = "<< &texas << endl;
	cout << "In oil(), x = " << x << ", &x = "<< &x << endl;
	{
		int texas = 113;
		cout << "In block, texas = " << texas << ", &texas = "<< &texas << endl;
		cout << "In block, x = " << x << ", &x = "<< &x << endl;
	}
	cout << "Post-block, texas = " << texas << ", &texas = "<< &texas << endl;
}