#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout << "Enter a word:\n";
	string word;
	cin >> word;
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}
