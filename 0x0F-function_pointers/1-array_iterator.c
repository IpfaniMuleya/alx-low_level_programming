#include "function_pointers.h"

/**
 * array_iterator - runs a function on elements of an array
 * @array: pointer to an array
 * @size: size of said array
 * @action: funtion pointer
 *
 * Return: void(noting)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
