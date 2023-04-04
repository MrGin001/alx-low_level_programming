#include "main.h"

/**
 * print_alphabet_x10 - Multiply alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
{

char n;
int i;
i = 0;
while (i < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
i++;
}


}
