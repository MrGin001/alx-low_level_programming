#include <stdio.h>
#include <ctype.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'a')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
