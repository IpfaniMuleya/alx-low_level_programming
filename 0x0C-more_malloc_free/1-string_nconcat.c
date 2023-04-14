#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second atring
 * @n: size
 * Return: NULL on failure,
 * pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t length_s1 = strlen(s1);
	size_t length_s2 = strlen(s2);
	char *conca;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= length_s2)
	{
		n = length_s2;
	}
	conca = (char *)malloc((length_s1 + n + 1) * sizeof(char));

	if (conca == NULL)
	{
		return (NULL);
	}
	strcpy(conca, s1);
	strcpy(conca + length_s1, s2);
	conca[length_s1 + n] = '\0';

	return (conca);
}
