#include <iostream>
using namespace std;
int main()
{
	for (int i = 10000; i < 100000; i ++ )
	{
		int j = 0;
		int t = i;
		while( t != 0)
		{
			j = j * 10 + t % 10;
			t /= 10;
		}
		if ((i << 2) == j)
		{
			cout << i;
			break;
		}
	}
}