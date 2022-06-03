#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 * main - print quote to the standard output
 *
 * Return: 0
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long int length = strlen(str);

	write(2, str, length);
	return (1);
}
