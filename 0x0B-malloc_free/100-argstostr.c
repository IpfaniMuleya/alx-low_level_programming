#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL,
 * a pointer to a new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int totalLength = 0;
	int currentPosition = 0;
	char *conca;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	conca = (char *)malloc(totalLength * sizeof(char) + 1);

	if (conca == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(conca + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		conca[currentPosition++] = '\n';
	}
	conca[totalLength] = '\0';
	return (conca);

}
