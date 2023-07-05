#include <stdio.h>

/**
 * _sqrt_recursion_wrapper - A wrapper function that performs the recursive calculation.
 *
 * @n: Input number.
 * @min: Minimum number to guess.
 * @max: Maximum number to guess.
 *
 * Return: Square root of n or -1.
 */
int _sqrt_recursion_wrapper(int n, int min, int max)
{
    int guess;
    int guess_squared;

    if (min > max)
        return -1;

    guess = (min + max) / 2;
    guess_squared = guess * guess;

    if (guess_squared == n)
        return guess;
    else if (guess_squared < n)
        return _sqrt_recursion_wrapper(n, guess + 1, max);
    else
        return _sqrt_recursion_wrapper(n, min, guess - 1);
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a number.
 *
 * @n: Input number.
 *
 * Return: Square root of n.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return _sqrt_recursion_wrapper(n, 1, n);
}

