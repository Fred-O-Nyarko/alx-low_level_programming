#include "main.h"

/**
 * _pow_recursion - calculates the power of two input values
 * @x: input value
 * @y: input value
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	--y;
	return (x * _pow_recursion(x, y));
}
