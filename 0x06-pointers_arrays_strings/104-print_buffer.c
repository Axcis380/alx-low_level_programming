#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable characters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 *
 * Description: The function prints the content of the buffer @b in a specific
 * format. It displays the byte position, the hex content of 10 bytes at a time,
 * and the corresponding printable characters. If the buffer size is not a multiple
 * of 10, it handles the remaining bytes correctly.
 */
void print_buffer(char *b, int size)
{
    int byte, index;

    for (byte = 0; byte < size; byte += 10)
    {
        printf("%08x: ", byte);

        for (index = 0; index < 10; index++)
        {
            if ((index + byte) >= size)
                printf("  ");
            else
                printf("%02x", *(b + index + byte));

            if ((index % 2) != 0 && index != 0)
                printf(" ");
        }

        for (index = 0; index < 10; index++)
        {
            if ((index + byte) >= size)
                break;

            if (*(b + index + byte) >= 32 && *(b + index + byte) <= 126)
                printf("%c", *(b + index + byte));
            else
                printf(".");
        }

        printf("\n");
    }
}

