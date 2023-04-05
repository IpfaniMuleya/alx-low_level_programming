#include "main.h"

/**
 * _pow_recursion - gives x raied to power y
 * @x: variable
 * @y: power to which the var is raised to
 * Return: -1 when y < 0
 * 1 when y is 0
 * x power y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
