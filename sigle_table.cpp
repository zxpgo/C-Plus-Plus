#include <iostream>
#include <string>
using namespace std;


const char * ne = "kfd ktbd fzm eubd kfd pzyiom mztx ku kzyg ur bzha kfthcm ur mfudm zhx mftnm zhx mdzythc pzq ur ezsszcdm zhx gthcm zhx pfa kfd mdz tm sutythc fuk zhx pfdkfdi ntcm fzld pthcm sok pztkz stk kfd uamkdim eitdx sdruid pd fzld uoi  efzk rui mubd ur om zid uok ur sidzkf zhx zyy ur om zid rzk hu foiia mztx kfd ezindhkdi kfda kfzhgdx ftb boef rui kfzk";

int main()
{
	int * a = new int[26];
	while (*ne != '\0')
	{
		a[int(*ne) % 97] += 1;
		ne++;
	}
	for (int i =0; i < 26; i++)
		cout << a[i] << " ";
	cout << endl;
	delete [] a;
	return 0;
}
