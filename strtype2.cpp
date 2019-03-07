#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char ch1[20];
	string str1;
	
	cout << "ch1's length before input: " <<  strlen(ch1) << endl;
	cout << "str's length before input: " << str1.size() << endl;
	cout << "Enter a line of text: \n";
	cin.getline(ch1,20);
	cout << "Enter another line of text: \n";
	getline(cin,str1);
	cout << "ch1: " << ch1 << " it's length: " << strlen(ch1) << endl;
	cout << "str1: " << str1 << " it's length: " << str1.size() << endl;
	cout << R"(Jim "King" \n instead of endl.)" << '\n';
	return 0; 
}
