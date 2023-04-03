#include <stdio.h>

/**
 * main - function that prints the single digit combinations
 * Return: Always 0
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++x;
	}
	putchar('\n');
	return (0);
}
