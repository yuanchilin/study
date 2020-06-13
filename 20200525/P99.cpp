#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int i = 0;
int j = 0;
class CDemo
{
	public :
	CDemo() : str(NULL)
	{
		// cout << "constructor:" << i ++ << endl;
	};
	~CDemo() 
	{
		if(str) delete[] str;
	};
	char* str;
};

int main(int argc, char ** argv)
{
	CDemo d1;
	d1.str = new char[32];
	strcpy (d1.str, "trend micro");

	vector <CDemo> *a1 = new vector <CDemo> ();
	a1->push_back(d1);
	delete a1;

	return 0;
} 