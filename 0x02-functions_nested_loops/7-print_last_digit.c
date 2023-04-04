#include "main.h"

/**
 * print_last_digit - Prints the last digit of a set of number
 * @n: The iteration set
 * Return: The last digit of a number
 */

int print_last_digit(int n)

{

	int last_d;

	last_d = n % 10;
	if (last_d < 0)
	{
	last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
