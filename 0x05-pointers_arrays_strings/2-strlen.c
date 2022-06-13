#include "main.h"

/**
 * _strlen - returns the length of a string
 * @*s: pointer to the first character of the string
 * @s: the name of the pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
