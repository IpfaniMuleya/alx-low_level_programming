#include "main.h"

/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: a pointer to an array of strings (words),
 * NULL if str == NULL or str == "",
 * or NULL if function fails
 */

char **strtow(char *str)
{
	int i, j, k, length, count = 0;
	char **words = NULL;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	words = (char **)malloc((count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
		}
		words[count] = (char *)malloc((j - i + 1) * sizeof(char));

		if (words[count] == NULL)
		{
			for (k = 0; k < count; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[count], &str[i], j - i);
		words[count][j - i] = '\0';

		i = j;
		count++;
	}
	words[count] = NULL;
	return (words);

}
