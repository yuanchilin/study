#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int g_iMax = 0;
	cout << "pls put the max number:  ";
	cin >> g_iMax;
	try 
	{
		if (g_iMax < 0)
			throw g_iMax;

		for (int l_iLoop = 0; l_iLoop <= g_iMax; l_iLoop ++)
		{
			int l_iTmp1 = l_iLoop;
			int l_iTmp2 = l_iLoop;
			int l_iTt1 = 0;
			int l_iDgt = 0;

			do 
			{
				++ l_iDgt;
				l_iTmp1 = l_iTmp1 / 10;
			}
			while (l_iTmp1);

			for (int i = 0; i != l_iDgt; ++ i)
			{
				l_iTt1 += double (pow ( double(l_iTmp2 % 10), double (l_iDgt)) + 0.5);
				l_iTmp2 = l_iTmp2 / 10;

			}
			if (l_iLoop == l_iTt1)
				cout << l_iTt1 << endl;
		}
	}
	catch (int n)
	{
		cerr << "Error, input number " << n << " less than zero! " << endl;
	}
	return 0;
}