#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 */


void print_diagonal(int n)
{

    if (n <= 0)
    {
        _putchar('\n');
        return;
    } else
	{
    	int i, j;		

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
	{
		if (j==i)
			_putchar('\\');
		else if (j<i)
            _putchar(' ');
	}
        _putchar('\n');
    }
    }
}
