#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: lenght of the string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}

	i++;
	_strlen_recursion(s + 1);
}
