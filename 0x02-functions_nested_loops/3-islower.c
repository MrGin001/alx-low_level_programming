#include "main.h"

/**
 * _islower - take check for lowercase letter
 *  @c: character of iteration
 *  Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
