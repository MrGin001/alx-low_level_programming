#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */

int main(void)
{
	int n;
	char ltr;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ltr = 'a'; ltr <= 'f'; ltr++)
		putchar(ltr);

	putchar('\n');

	return (0);
}
