#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: NULL if size = 0, a pointer to the array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);

}
