#include <iostream>
using namespace std;

int main()
{
	int a[3];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;

	int *p, *q;
	p = a;
	cout << p << '\n';
	cout << *p << '\n';
	q = &a[2];
	cout << q << '\n';
	cout << *q << '\n';
	cout << (long)q - (long)p << '\n';
	cout << q - p << '\n';
	cout << a[q - p] << '\n';
	cout << a[*q - *p] << '\n';
}