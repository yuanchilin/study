#include <iostream>

using namespace std;

void matching (int a[], int b[], int k)
{
	int i = 0;
	while (i <= k - 1)
	{
		int j = 0;
		while (j <= k - 1)
		{
			if (a[i] == b[j])
			{
				cout << "a[" << i << "]" << "match"
				<< "b[" << j << "]" << endl;

				break;
			}
			j++;
		}
		i ++;
	}
	cout << endl;
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10] = {10, 6, 4, 5, 1, 8, 7, 9, 3, 2};

	int k = sizeof(a) / sizeof(int);
	cout << sizeof(a) << " / " << sizeof(int) << endl;
	matching (a, b, k);
	return 0;
}