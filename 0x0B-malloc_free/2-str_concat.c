#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t length_s1 = strlen(s1);
	size_t length_s2 = strlen(s2);
	char *conca = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (conca == NULL)
	{
		return (NULL);
	}
	memcpy(conca, s1, length_s1);
	memcpy(conca + length_s1, s2, length_s2);

	return (conca);
}
