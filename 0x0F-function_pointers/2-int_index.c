#include "function_pointers.h"

/**
 * int_index - searches for an integer using a function
 * @array: pointer to an array
 * @size: number of elements in said array
 * @cmp: pointer to the function to be used to compare
 *
 * Return: the index of the first element that matches,
 * or -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (cmp == NULL))
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
