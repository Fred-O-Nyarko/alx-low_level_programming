#include "main.h" 

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}

	i++;
	return _strlen_recursion(s + 1);
}
