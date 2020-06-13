#include <iostream>
using namespace std;
int main()
{
	int iv;
	int iv2 = 1024;
	int iv3 = 999;
	// int &reiv;
	int &reiv2 = iv;
	int &reiv3 = iv;
	int *pi;
	// *pi = 5;
	pi = &iv3;
	// const double di;
	const double maxWage = 10.0;
	const double minWage = 0.5;
	const double *pc = &maxWage;

	cout << pi;
	return 0;
}