#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
