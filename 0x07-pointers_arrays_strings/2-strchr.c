#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates character in string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: a pointer to the first occurrence of char
 */

char *_strchr(char *s, char c)
{
	int a;

	while (a != 0)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
	}
	return (NULL);
}
