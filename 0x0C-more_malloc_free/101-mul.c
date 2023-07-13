#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a string contains only digits
 * @str: The input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			result[k] += (num1[i] - '0') * (num2[j] - '0');
			while (result[k] >= 10)
			{
				result[k - 1] += result[k] / 10;
				result[k] %= 10;
				k--;
			}
		}
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

