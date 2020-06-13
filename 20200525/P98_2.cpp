#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
	cout << "vector size is : " << v.size() << endl;
	vector<int>::iterator p = v.begin();
}

void print_list(vector <int> v)
{
	int i = 0;
	cout << endl;
	while(i < v.size())								
		cout << v[i ++] << " ";
	cout << endl;	
}

int sum(vector<int>vec)
{
	int result = 0;
	vector<int>::iterator p = vec.begin();
	while (p != vec.end())
		result += *p++;
	return result;
}

int main()
{
	vector <int> v1(100);

	cout << endl << v1.size() << endl;
	cout << sum(v1) << endl;
	
	v1.push_back(23);

	cout << endl << v1.size() << endl;
	cout << sum(v1) << endl;
	
	v1.reserve(1000);
	v1[900] = 900;
	
	cout << endl << v1[900] << endl;
	cout << v1.front() << endl;
	cout << v1.back() << endl;
	
	v1.pop_back();
	
	cout << endl << v1.back() << endl;

	return 0;
}