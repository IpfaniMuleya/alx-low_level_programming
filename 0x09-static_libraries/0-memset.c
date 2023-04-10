#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: this is the constant byte
 * @n: parameter
 * Return: gives 0 when successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
