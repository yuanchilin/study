#include <stdlib.h>
#include <stdio.h>
#define LOOP 10
int main()
{
	int ranC = 0;
	for (int i = 0; i < LOOP; i ++)
	{
		int x = rand();
		int y = rand();
		if (x * x + y * y < RAND_MAX * RAND_MAX)
			ranC ++;
	}

	printf("%d  %d  %d  %d\n", ranC, rand(), rand(), RAND_MAX);
}