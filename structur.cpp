#include <iostream>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable guest = {"gloria", 1.88, 29.99};
	inflatable pal = {"Arthur", 3.12, 32.99};

	cout << "Guest: " << guest.name << " " << guest.volume 
	<< " " << guest.price << endl;
	cout << pal.price + guest.price << endl;
	return 0;
}
