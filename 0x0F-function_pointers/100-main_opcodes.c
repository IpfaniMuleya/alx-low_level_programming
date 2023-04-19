#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when successful,
 * error otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *point = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(point + 1));
	}

	printf("\n");

	return (0);
}
