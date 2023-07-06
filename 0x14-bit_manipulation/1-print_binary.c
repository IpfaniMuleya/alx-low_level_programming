#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit_counter = 0;
	unsigned long int bit_mask = 1;

	while ((n >> bit_counter) > 0)
	{
		bit_counter++;
	}

	if (bit_counter > 0)
	{
		bit_counter--;
	}

	while (bit_counter >= 0)
	{
		bit_mask = 1 << bit_counter;

		if (n & bit_mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bit_counter--;
	}

}
