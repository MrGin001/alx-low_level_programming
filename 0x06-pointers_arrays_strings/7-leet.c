#include "main.h"
/**
 * leet - an encoding
 * @str: string for encoding
 * Return: str
 */

char *leet(char *s)
{
	int length, count;
	char alphabets[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	length = 0;
	while (s[length] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (alphabets[count] == s[length])
			{
				s[length] = numbers[count];
			}
			count++;
		}
		length++;
	}
	return (s);
}
