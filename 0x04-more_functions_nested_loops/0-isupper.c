#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
