#include "main.h"

/**
 * print_rev - prints a string in revers, followed by a new line, to stdout.
 * @*str: the first character of the string
 * @str: address of the first character of the string
 *
 * Return: none
 */

void print_rev(char *str)
{
	unsigned int str_len, j = 0;

	while (*str != '\0')
	{
		str_len++;
		str++;
	}

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}

