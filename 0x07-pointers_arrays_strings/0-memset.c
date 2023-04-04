#include "main.h"

/**
 * _memset - adds constant byte to memory
 * @s: memory to be added to
 * @b: characters being copied
 * @n: copy count
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
