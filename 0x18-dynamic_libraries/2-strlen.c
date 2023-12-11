#include "main.h"
/**
 * _strlen - gives the length of a string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
