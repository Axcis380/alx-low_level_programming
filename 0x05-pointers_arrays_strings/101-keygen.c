#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 14

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1] = "Tada! Congrats";

    srand(time(0));

    // Generate random characters for remaining positions in the password
    for (int i = strlen(password); i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; // Generate a random character in the ASCII range 33-126
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return 0;
}

