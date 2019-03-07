#include <iostream>
using namespace std;

int main()
{
	int year;
	char address[80];
	cout << "Enter year:\n" ;
	(cin >> year).get();
	cout << "Enter address:\n";
//	cin >> address;
	cin.getline(address,80);
	cout << "Year: " << year <<endl;
	cout << "Address: " << address;
	return 0;
}
