#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string strArr1[] = {"trend", "Micro", "Soft"};
	string *pStrArr1 = new string[2];
	pStrArr1[0] = "US";
	pStrArr1[1] = "CN";

	for(int i = 0; i < sizeof(strArr1) / sizeof(string); i++)
	{
		cout << strArr1[i];
	}
	for(int j = 0; j < sizeof(pStrArr1) / sizeof(string); j++)
	{
		cout << pStrArr1[j];
	}
	cout << endl << sizeof(strArr1) << endl;
	cout << sizeof(pStrArr1) << endl;
	cout << sizeof(string) << endl;
	return 0;
}