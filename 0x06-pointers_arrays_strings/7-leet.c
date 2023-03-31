#include "main.h"
/**
 * leet - an encoding
 * @str: string for encoding
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (str[i] == a[i])
			str[i] = b[i];
		}
	}
	return (str);
}
