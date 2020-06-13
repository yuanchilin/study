#include <iostream>
#include <string>
using namespace std;
main()
{
	int count = 0;
	int m = 9999;
	while(m)
	{
		count ++;
		m = m & (m - 1);
		// printf("%x\n", m);
	}
	cout << count;
	//  ^ 异或
	// count ++;
	// count = count ^ m;
	// cout << count << endl << m << endl;
	// m = count ^ m;
	// cout << count << endl << m << endl;
	// count = count ^ m;
	// cout << count << endl << m;
}