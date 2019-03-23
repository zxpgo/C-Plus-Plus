#include <iostream>
using namespace std;
int main()
{
	char x = 0XFFFF;
	cout << (int)x << endl; 
	cout << 10 +'a' + 10.0 * 12.22 << endl;
	char ch;
	cin >> ch;
	while ( ch != '\n')
	{
		cout << ch;
		cin >> ch;
	}
	return 0;
}
