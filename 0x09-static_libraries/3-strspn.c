#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int add = 0;
	int i;
	char *a = accept;

	while (*s)
	{
		for (i = 0; a[i]; i++)
		{
			if (*s == a[i])
			{
				add++;
				break;
			}
			if (a[i + 1] == '\0')
			{
				return (add);
			}
		}
	s++;
	}
	return (add);

}
