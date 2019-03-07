#include<iostream>
#include<cmath> 
using namespace std;

struct rect 
{
	double x;
	double y;
};
struct polar
{
	double distance;
	double angle;	
};

void rect_to_polar(const rect *xypos,  polar *dapos);
void show_polar(const polar *dapos);

int main()
{
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y value: ";
	while (cin >> (rplace.x) >> (rplace.y))
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Nest two number(q to quit): ";
	}
	return 0;
}

void  rect_to_polar(const rect *xypos, polar *dapos)
{
	dapos->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
	dapos->angle = atan2(xypos->y, xypos->x);
}

void show_polar(const polar *dapos)
{
	const double Rad_to_deg = 57.29577951;
	cout <<  "Distance = " << dapos->distance;
	cout << ", Angle =  " << dapos->angle * Rad_to_deg << " degrees.\n";
}

