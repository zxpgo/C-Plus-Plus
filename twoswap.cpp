#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main()
{	
	cout.precision(2);
	cout.setf(ios::fixed,ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	Swap(i,j);
	cout << "Now, i, j = " << i << ", " << j << endl;

	job sue = {"Susan", 73000.6, 7};
	job sidney = {"Sidney", 78060.7, 9};
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);
	return 0;
}

template <typename T>
void Swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job & j1, job & j2)
{
	double t1;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	int t2;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job &j)
{
	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}
