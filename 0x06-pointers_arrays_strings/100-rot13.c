#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	int i;

	while (*ptr)
	{
		for (i = 0; (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'); i++)
		{
			if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
				*ptr += 13;
			else
				*ptr -= 13;
		}
		ptr++;
	}

	return s;
}

