#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char t;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		t = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = t;
	}
}
