#include "main.h"

/**
 * _memcpy - a fuction that copies from src file into dest
 * @src: source memory
 * @dest: destination memory
 * @n: copied file
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
