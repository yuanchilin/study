#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print (vector <int> v);

int main()
{
	vector <int> array;
	array.push_back(1);
	array.push_back(6);
	array.push_back(6);
	array.push_back(3);

	// vector <int> :: iterator itor;
	// vector <int> :: iterator itor2;
	// itor = array.begin();
	// int p = 6;
	array.erase (remove (array.begin (), array.end(), 6), array.end());
	// array.erase (array.begin (), array.end());
	// itor2 = remove (array.begin (), array.end(), 6);
	print (array);
	return 0;
}

void print (vector <int> v)
{
	cout << "\n vector size is : " << v.size() << endl;
	vector <int> :: iterator p = v.begin();
}