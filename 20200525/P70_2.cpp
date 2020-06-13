#include <iostream>
using namespace std;

void change(int *a, int &b, int c)
{
	c = *a;
	b = 3;
	*a = 2;
}

int main()
{
	int a = 1, b = 2, c = 3;
	change(&a, b, c);
	cout << a << b << c;


	// int *ptr;
	// ptr = (int *) 0x8000;
	// *ptr = 0xaabb;
	return 0;
}