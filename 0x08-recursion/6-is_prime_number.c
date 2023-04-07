#include "main.h"

/**
 * primer - uses recursion to get prime numbers
 * @n: input var
 * @i: used for recursion
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */

int primer(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (primer(n, i - 1));
	}
}

/**
 * is_prime_number - determines if a var is prime or not
 * @n: input variable
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primer(n, n - 1));
}
