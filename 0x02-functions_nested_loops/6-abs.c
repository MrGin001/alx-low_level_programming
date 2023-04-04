#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The iteration set
 * Return: Absolute value or 0
 */


int _abs(int c)

{

	if (c < 0)
	{
	int absv;

	absv = c * -1;
	return (absv);
	}
	return (0);
}
