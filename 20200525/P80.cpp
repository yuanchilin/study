typedef unsigned short int USHORT;

#include <iostream>
using namespace std;	
int main()
{
	USHORT *pInt = new USHORT;
	*pInt = 10;
	cout << "*pInt:" << *pInt << endl;
	delete pInt;
	pInt = 0;
	long * pLong = new long;
	*pLong = 90000;
	cout << "*pLong:" << *pLong << endl;

	// *pInt = 20;

	// cout << "*pInt: " << *pInt << endl;
	cout << "*pLong: " << *pLong << endl;
	delete pLong;
	return 0;
}