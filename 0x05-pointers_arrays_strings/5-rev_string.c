#include "main.h"
/**
 * rev_string - prints reversed string
 * @s: parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(s[10]);
	_putchar('\n');
}
