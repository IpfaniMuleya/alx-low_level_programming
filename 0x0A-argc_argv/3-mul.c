#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argumrnt count
 * @argv: argument vector
 * Return: 0 when successful and 1 for errors
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = num1 * num2;
		printf("%d\n", product);
	}

	return (0);
}
