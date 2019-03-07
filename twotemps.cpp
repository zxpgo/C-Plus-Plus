#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T a[], T b[], int n);
void Show(int a[]);
const int Lim = 4;
int main()
{
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << endl;

	int d1[Lim] = {0,7,0,4};
	int d2[Lim] = {1,9,6,9};
	cout << "Original arrays:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "Swapped arrays:\n";
	Show(d1);
	Show(d2);
	return 0;
}
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	for (int i = 0; i < Lim; i++)
		cout << a[i] << " ";
	cout << endl;
	
}
