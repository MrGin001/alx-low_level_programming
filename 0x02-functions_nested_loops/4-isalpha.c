#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the iteration value
 *
 * Return: 1 for alphabet or 0 for non alphabets
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
