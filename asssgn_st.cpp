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
	inflatable bou = {"sun", 0.2, 12.49};
	inflatable choice;
	choice = bou;
	cout << "choice: " << choice.price << endl;
	return 0;
}
