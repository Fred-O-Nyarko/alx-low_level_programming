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
	int strSize = sizeof(*s);
	int i;

	for (i = 0; i <= strSize; i++)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
	}
	return (i);
}
