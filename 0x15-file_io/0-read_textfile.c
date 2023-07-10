#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: actual number of letters readand printed,
 * or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t fread, fwritten;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
	{
		free(buff);
		return (0);
	}
	fread = read(f_d, buff, letters);
	if (fread == -1)
	{
		free(buff);
		close(f_d);
		return (0);
	}
	fwritten = write(STDOUT_FILENO, buff, fread);
	if (fwritten == -1 || fwritten != fread)
	{
		free(buff);
		close(f_d);
		return (0);
	}
	free(buff);
	close(f_d);
	return (fwritten);
}
