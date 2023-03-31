#include "main.h"
/**
 * _strncpy - copy string
 * @dest: recipient string
 * @src: origin sptring
 * @n: number of string
 * Return: recipient string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
