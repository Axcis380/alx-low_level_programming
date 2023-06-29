#include "main.h"

/**
 * base10 - Calculates the power of 10.
 * @n: Exponent.
 *
 * Return: Returns 10 to the power of the exponent.
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}

/**
 * print_number - Prints an integer using _putchar.
 * @n: Integer to be printed.
 *
 * Description: The function prints the given integer @n using only the _putchar
 * function. It handles both positive and negative numbers and uses a helper function
 * to calculate the power of 10. The integer is printed digit by digit.
 */
void print_number(int n)
{
	int power;

	power = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / power == 0)
			power /= 10;

		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}

