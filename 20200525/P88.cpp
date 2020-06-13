#include <iostream>
using namespace std;
#define RECURSION 0
#define NO_RECURSION 1

#if RECURSION
int f(int m, int n)
{
	if(1 == m)
	{
		return n;
	}
	if(1 == n)
	{
		return m;
	}
	return f(m - 1, n) + f(m, n - 1);
}
#endif

#if NO_RECURSION

int f(int m, int n)
{
	int a[100][100];
	for (int i = 0; i != m; ++i)
		a[i][0] = i + 1;
	for (int i = 0; i != n; ++i)
		a[0][i] = i + 1;
	for (int i = 1; i != m; ++i)
		for (int j = 1; j != n; ++j)
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		return a[m - 1][n - 1];
}
#endif

int main()
{
	cout << f(5, 5) << endl;
	return 0;
}