#include <iostream>
#define char_point char *
typedef char * byte_pointer;
int main()
{
	using namespace std;
	byte_pointer pa, pb;
	cout << "typedef: \n";
	cout << sizeof(pa) << endl;
	cout << sizeof(pb) << endl;
	
	char_point pc, pd;
	cout << "#define:\n ";
	cout << sizeof(pc) << endl;
	cout << sizeof(pd) << endl;
	return 0;
}
