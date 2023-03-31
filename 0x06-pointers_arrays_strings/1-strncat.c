#include "main.h"
/**
 * _strncat - concatenates srings
 * @dest: string recipient
 * @src: oringin string
 * @n: number of characters to add up
 * Return: concatenation product
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0;
	int slength = 0;
	int z;

	for (z = 0 ; dest[z] != '\0' ; z++)
		dlength++;
	for (z = 0 ; src[z] != '\0' ; z++)
		slength++;
	for (z = 0 ; z < n ; z++)
		dest[dlength + z] = src[z];
	return (dest);
}
