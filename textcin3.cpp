#include <iostream>
using namespace std;
int main()
{
	char ch;
	int count = 0;
	cout << "Enter characters, enter # to quit: \n";
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++ count;
		cin.get(ch);
	}
	cout << endl << count <<  " characters read. \n";
	return 0;
}
