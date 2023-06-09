#include "main.h"

/**
 * create_file - creates afile and writes stuff to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	f_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = write(f_d, text_content, strlen(text_content));
		if (length == -1)
		{
			close(f_d);
			return (-1);
		}
	}
	close(f_d);
	return (1);
}
