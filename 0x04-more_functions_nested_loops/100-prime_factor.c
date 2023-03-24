#include <math.h>
#include <stdio.h>
/**
 * main - prints the prime factor
 * Return: always (0)
 */
int main(void)
{
	long num = 612852475143;
	long i, prif;
	double root = sqrt(num);

	for (i = 1; i <= root; i++)
	{
		if (num % i == 0)
		{
			prif = num / i;
		}
	}
	printf("%ld\n", prif);
	return (0);
}
