#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>);
void print_list(vector<int> v);

int main()
{
	vector<int> vec;
	vec.push_back(34);
	vec.push_back(23);

	print_list(vec);
	print(vec);
	
	vector<int>::iterator p;
	p = vec.begin();
	*p = 68;
	*(p + 1) = 69;
	
	print_list(vec);
	print(vec);
	
	vec.pop_back();

	print_list(vec);
	print(vec);

	vec.push_back(101);
	vec.push_back(102);
	
	print_list(vec);
	print(vec);

	vec[0] = 1000;
	vec[1] = 1001;
	vec[2] = 1002;
	// vec[3] = 1003;

	print_list(vec);
	print(vec);
	
	return 0;
}

void print(vector<int> v)
{
	cout << "vector size is : " << v.size() << endl;
	vector<int>::iterator p = v.begin();
}

void print_list(vector<int> v)
{
	int i = 0;
	cout << endl;
	while(i < v.size())								
		cout << v[i ++] << " ";
	cout << endl;	
}