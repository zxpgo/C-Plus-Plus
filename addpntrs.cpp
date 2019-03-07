#include <iostream>
int main()
{
	using namespace std;
	double wages[3] = {1000.0, 2000.0, 3000.0};
	short stacks[3] = {3, 2, 1};

	double *pw = wages;
	short *ps = &stacks[0];
	cout << "pw = " <<  pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "Add 1 to the pw pointer:\n";
	cout << "pw = " <<  pw << ", *pw = " << *pw << endl;

	cout << "ps = " <<  ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "Add 1 to the ps pointer:\n";
	cout << "ps = " <<  ps << ", *ps = " << *ps << endl;

	cout << "stacts[0] = " << stacks[0] << endl;
	cout << "*(stacks + 1) = " <<  *(stacks+1) << endl;

	cout << "Wages array size: " << sizeof(wages) << endl;
	cout << "pw pointer size: " << sizeof(pw) << endl;
	return 0;
}
