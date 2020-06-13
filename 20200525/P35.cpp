#include <iostream>
using namespace std;
int main1()
{
	/* code */
	int a, x;
	for(a = 0, x = 0; a <= 1 && !x++; a++)
	{
		a++;
	}
	cout << a << x <<endl;
	return 0;
}

int main2()
{
	/* code */
	int a, x;
	for(a = 0, x = 0; a <= 1 && !x++; a++)
	{
		// a++;
	}
	cout << a << x <<endl;
	return 0;
}
main()
{
	main1();
	main2();
	return 0;
}