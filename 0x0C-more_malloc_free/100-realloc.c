#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int copy_size;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newPtr = malloc(new_size);

	if (newPtr == NULL)
	{
		return (NULL);
	}
	copy_size = old_size < new_size ? old_size : new_size;

	memcpy(newPtr, ptr, copy_size);
	free(ptr);

	return (newPtr);
}
