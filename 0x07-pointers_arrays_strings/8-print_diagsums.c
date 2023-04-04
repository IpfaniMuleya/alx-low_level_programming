#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: parameter
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", s1, s2);
}
