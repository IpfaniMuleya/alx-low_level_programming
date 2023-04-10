#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: pointer to memory area src
 * @dest: pointer to memory area dest
 * @n: parameter
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_point = dest;
	char *src_point = src;

	while (n--)
	{
		*dest_point++ = *src_point++;
	}
	return (dest);
}
