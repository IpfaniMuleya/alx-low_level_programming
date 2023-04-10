#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 when successful and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
