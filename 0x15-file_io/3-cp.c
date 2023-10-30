#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments provided
 * @argv: array of strings containing the arguments passed
 *
 * Return: 0 on success, Otherwise, return a value indicating failure
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int file_from, file_to, bytes_read, bytes_written;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read file%s\n", argv[1]), exit(98);

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (bytes_read);

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
