#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @*str: the first character of the string
 * @str: address of the first character of the string
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
