#include <iostream>
#include <vector>

using namespace std;

void print(vector <int>);

int main()
{
	vector <int> array;
	array.push_back(6);
	array.push_back(6);
	array.push_back(6);
	array.push_back(3);

	vector <int> :: iterator itor;
	vector <int> :: iterator itor2;
	itor = array.begin();

	for (itor = array.begin(); itor != array.end(); )
	{
		if(6 == *itor)
		{
			itor2 = itor;
			array.erase (itor2);
			itor --;     // add by ycl  无法保证稳定性
		}
		itor ++;
	}

	print (array);
	return 0;
}

void print (vector <int> v)
{
	cout << "\n vector size is : " << v.size() << endl;
	vector <int> :: iterator p = v.begin ();
}