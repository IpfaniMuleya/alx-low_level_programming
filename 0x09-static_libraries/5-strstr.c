#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

	if (!haystack || !needle)
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);

}
