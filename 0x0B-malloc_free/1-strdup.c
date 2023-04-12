#include "main.h"

/**
 * _strdup - gives a pointer to a newly
 * allocated space in memory
 * @str: string given
 * Return: NULL if str = NULL,
 * a pointer to the duplicated string,
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *clone = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (clone == NULL)
	{
		return (NULL);
	}
	strncpy(clone, str, len);
	clone[len] = '\0';

	return (clone);
}
