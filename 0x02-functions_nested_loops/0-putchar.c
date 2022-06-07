#include "main.h"
#include <string.h>

/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[8] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r' };
	int i = 0;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}

	return (0);

}

