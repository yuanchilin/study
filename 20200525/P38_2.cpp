#include <stdio.h>

int main()
{
	unsigned int a = 0xfffffff7;
	unsigned char i = (unsigned char) a;
	char* b = (char*) &a;

	printf("%x, %x\n", i, *b);
}