#include <stdio.h>

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_wrapper(int n, int min, int max)
{
    if (min > max)  /* If the range of values is invalid, return -1 */
        return -1;

    long int guess = (min + max) / 2;              /* Get an estimation (guess) */
    long int guess_squared = guess * guess;        /* Square the guess */

    if (guess_squared == n)                         /* If the squared guess is equal to n, return the guess */
        return guess;
    else if (guess_squared < n)                     /* If the squared guess is less than n, recursion with a higher range */
        return _sqrt_recursion_wrapper(n, guess + 1, max);
    else                                            /* If the squared guess is greater than n, recursion with a lower range */
        return _sqrt_recursion_wrapper(n, min, guess - 1);
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
    if (n < 0)       /* If n is negative, return -1 */
        return -1;

    return _sqrt_recursion_wrapper(n, 0, n); /* Call the recursion function with a valid range */
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(16777216);
    printf("%d\n", r);
    return 0;
}

