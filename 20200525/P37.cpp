#include <iostream>
using namespace std;

int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4;
	// ~ a >>  4;
	// cout << b << endl;
	printf("b=%d\n", a);  // 题目有误
	// printf("b=%o\n", a);
	printf("b=%d\n", b);  // 题目有误
	return 0;
}

