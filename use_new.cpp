#include <iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;
	
	cout << "*pt: " << *pt << endl;
	cout << "pt: " << pt  << endl;
	cout << "&nights: " << &nights << endl;
	return 0;
}
