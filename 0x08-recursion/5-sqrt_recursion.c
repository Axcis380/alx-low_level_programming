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
    int guess;  /* Declare the variable 'guess' at the top of the code block */
    int guess_squared;  /* Declare the variable 'guess_squared' */

    if (min > max)  /* If the range of values is invalid, return -1 */
        return -1;

    guess = (min + max) / 2;  /* Get an estimation (guess) */
    guess_squared = guess * guess;  /* Square the guess */

    if (guess_squared == n)  /* If the squared guess is equal to n, return the guess */
        return guess;
    else if (guess_squared < n)  /* If the squared guess is less than n, recurse with an upper range */
        return _sqrt_recursion_wrapper(n, guess + 1, max);
    else  /* If the squared guess is greater than n, recurse with a lower range */
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
    if (n < 0)  /* If n is negative, return -1 */
        return -1;

    return _sqrt_recursion_wrapper(n, 0, n);  /* Call the recursion function with a valid range */
}

