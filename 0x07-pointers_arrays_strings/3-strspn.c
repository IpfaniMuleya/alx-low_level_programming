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
	int got = 1;
	char *a = accept;

	while (*s && got)
	{
		got = 0;

		while (*a)
		{
			if (*s == *a)
			{
				add++;
				got = 1;
				break;
			}
			a++;
		}
		s++;
	}
	return (add);
}
