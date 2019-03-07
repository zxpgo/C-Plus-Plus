#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char ch1[20];
	char ch2[20] = "jaguar";
	int len1 = strlen(ch2);
	string str1 = "12345";
	int len2 = str1.size();
	strcpy(ch1, ch2 );
	strcat(ch1, "ccc");
	cout << "ch1: " <<  ch1 << endl;
	cout << "ch2: " <<  ch2 << endl;
	cout << "len1: " << len1 << endl;
	cout << "len2: " <<  len2 << endl;
	return 0;
}
