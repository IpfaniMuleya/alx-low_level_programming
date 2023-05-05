#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index of the bit to get, starting from 0
 *
 * Return: value of the bit at a certain index,
 * or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m_bit = (n >> index) & 1;

	return (m_bit);
}
