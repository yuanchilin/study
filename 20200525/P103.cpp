#include <stdio.h>

int jug (int x, int y)
{
	if (x >= 0)
	{
		return x;
	}
	else if (y == 0)
		return x;
	else
		return x / y;
}

int sub (int x, int y)
{
	return (x + y);
}

int minus(int x, int y)
{
	return (x - y);
}

void test (int (*p) (int, int), int a, int b)
{
	int Int1;

	Int1 = (*p) (a, b);

	printf("a = %d, b = %d %d\n", a, b, Int1);
}

int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = -5;

	test (sub, a, b);
	test (minus, c, d);

	test (jug, e, b);
	return 0;
}