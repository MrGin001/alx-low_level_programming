#include "main.h"

/**
 * _strchr - function that locates a char in a set of strings
 * @s: string
 * @c: char
 * Return: a pointer to the initial occurence - if c is located
 * if not - NULL
 */

char *_strchr(char *s, char c)
{
	int first;

	for (first = 0; s[first] >= '\0'; first++)
	{
		if (s[first] == c)
			return (s + first);
	}

	return ('\0');
}
