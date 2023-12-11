#include "main.h"
/**
 * _abs - gets the absolute value of a number
 *
 * @num: used to check if a number is less than 0
 *
 * Return: gives -num if less than 0 and num otherwise
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
