#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    if (n == 0)
    {
        return (0);
    }

    int sum = 0;
    unsigned int i;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        int value = va_arg(args, int);
        sum += value;
    }

    va_end(args);
    return (sum);
}

