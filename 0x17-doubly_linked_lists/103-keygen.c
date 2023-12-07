#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LENGTH 16

/**
 * generate_key - Generates a key based on the given username.
 * @username: The input username.
 * @key: The generated key.
 */
void generate_key(const char *username, char *key)
{
	int i, len;
	unsigned int sum = 0;

	len = strlen(username);
	for (i = 0; i < len; i++)
		sum += username[i];

	snprintf(key, KEY_LENGTH + 1, "%08x%08x", len, sum);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE otherwise.
 */
int main(int argc, char *argv[])
{
	char key[KEY_LENGTH + 1];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	generate_key(argv[1], key);

	printf("%s\n", key);

	return (EXIT_SUCCESS);
}
