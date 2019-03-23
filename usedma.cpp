#include "dma.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	baseDMA shirt("Portabelly", 8);
	lackDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Display baseDMA object:\n";
	cout << shirt << endl;
	cout << "Display lackDMA object:\n";
	cout << balloon << endl;
	cout << "Display hasDMA object:\n";
	cout << map << endl;
	lackDMA balloon2(balloon);
	cout << "Result of lackDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Resutl of hasDMA assignment:\n";
	cout << map2 << endl;
	return 0;
}
