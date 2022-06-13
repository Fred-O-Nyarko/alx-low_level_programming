#include "main.h"

/**
 * rev_string - prints a given string in reverse.
 * @*s: the first character of the string
 * @s: address of the first character of the string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i - 1;

	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
