#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
		dest[e] = src[e];

	dest[e++] = '\0';
	return (dest);
}
