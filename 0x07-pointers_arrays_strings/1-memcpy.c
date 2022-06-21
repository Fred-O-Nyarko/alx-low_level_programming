#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the size of data to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
