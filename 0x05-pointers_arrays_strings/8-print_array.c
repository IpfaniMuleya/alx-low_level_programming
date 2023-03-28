#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: number of elements of the array to print
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != (n - 1))
			printf(", ");

	}
	printf("\n");
}
