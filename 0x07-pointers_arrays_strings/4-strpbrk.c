#include "main.h"

/**
 * _strpbrk - searches strings for set of bytes
 * @s: iteration string
 * @accept: the set for iteration
 * Return: a pointer to the match - if matched
 * if not - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
