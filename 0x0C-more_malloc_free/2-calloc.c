#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size
 * Return: NULL If nmemb or size is 0,
 * NULL If malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *pt;

	totalSize = nmemb * size;
	pt = malloc(totalSize);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (pt == NULL)
	{
		return (NULL);
	}
	memset(pt, 0, totalSize);

	return (pt);
}
