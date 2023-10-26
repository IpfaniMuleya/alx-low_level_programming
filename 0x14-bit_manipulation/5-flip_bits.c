#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counter = 0;

	while (difference != 0)
	{
		counter += difference & 1;
		difference >>= 1;
	}

	return (counter);
}
