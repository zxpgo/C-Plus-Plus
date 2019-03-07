#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable *ps = new inflatable;
	cout << "Enter name of infaltable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume of inflatable item: ";
	cin >> (*ps).volume;
	cout << "Enter price of inflatable item: ";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;
	return 0;
}
