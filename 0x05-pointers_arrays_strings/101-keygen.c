#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 9

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(0));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33; /* Generate a random character in the ASCII range 33-126 */
	}

	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */

	printf("Tada! Congrats\n");
	printf("%s\n", password);

	return (0);
}

