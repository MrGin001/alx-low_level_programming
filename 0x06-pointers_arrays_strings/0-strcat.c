#include "main.h"
/**
 * _strcat - concatenates string
 * @dest: string recipient pointer
 * @src: string origin pointer
 * Return: return dest string
 */

char *_strcat(char *dest, char *src)
{
	int dlength = 0;
	int slength = 0;
	int z;

	for (z = 0 ; dest[z] != '\0' ; z++)
		dlength++;
	for (z = 0 ; src[z] != '\0' ; z++)
		slength++;
	for (z = 0 ; z <= slength ; z++)
		dest[dlength + z] = src[z];
	return (dest);
}
