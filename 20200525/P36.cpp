#include <stdio.h>

int main()
{	
	int b = 3;
	int arr[] = {6, 7, 8, 9, 10};
	int *ptr = arr;
	*(ptr++) += 123;
	// printf( "%d\n ", *( ptr - 1));
	// printf( "%d\n ", *ptr);
	// printf( "%d\n ", *( ptr --));
	// printf( "%d\n ", *( -- ptr));
	printf( "%d,%d\n ", *ptr, *( ++ ptr));
	// printf( "%d,%d\n ", *ptr, *( ptr ++));
}
