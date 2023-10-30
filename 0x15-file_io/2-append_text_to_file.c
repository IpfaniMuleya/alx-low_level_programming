#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content to add to the file
 *
 * Return: 1 0n success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_WRONLY | O_APPEND);
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
