#include <iostream>
const int ArSize = 16;
int main()
{
	using namespace std;
	long long f[ArSize];
	f[0] = f[1] = 1;
	for (int i = 2; i < ArSize; i++)
		f[i] = i * f[i-1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << f[i] << endl;
	return 0;
}
