#include <iostream>
#include <string>
using namespace std;
int main()
{

	int x = 10; int y = 10, i;
	for(i = 0; x > 8; y = i ++)
	{
		printf("%d,%d,", x --, y);
	}
	return 0;
}