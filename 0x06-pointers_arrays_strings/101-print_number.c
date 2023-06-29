#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Description: The function prints the given integer @n. It handles both positive
 * and negative numbers and uses recursion to print each digit.
 */
void print_number(int n)
{
    unsigned int n1;

    if (n < 0)
    {
        n1 = -n;
        _putchar('-');
    }
    else
    {
        n1 = n;
    }

    if (n1 / 10)
        print_number(n1 / 10);

    _putchar((n1 % 10) + '0');
}

