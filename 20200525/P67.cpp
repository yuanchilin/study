#include <iostream>
#include <memory.h>
using namespace std;

char *GetMemory(char *p, int num)
{
	p = (char *)malloc(sizeof(char) * num);
	return p;
}

int main()
{
	char *str = NULL;
	// char *sss = NULL;
	str = GetMemory(str, 100);
	strcpy(str, "hello");
	cout << *str << endl;
	cout << str << endl;
	cout << &str << endl;
	return 0;
}
