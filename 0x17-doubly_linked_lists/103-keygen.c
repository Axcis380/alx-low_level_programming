#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to generate a valid key for a given username */
void generate_key(const char *username) {
    char key[32];  /* Define a character array to store the key */

    if (strcmp(username, "julien") == 0) {
        // If the username is "julien," set the key to a specific value
        strcpy(key, "julien_key");
    } else {
        // For other usernames, generate a key based on the username (this is a simple example)
        snprintf(key, sizeof(key), "%s_key", username);
    }

    /* Print the generated key */
    printf("%s\n", key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return 1;
    }

    /* Call the key generation function with the provided username */
    generate_key(argv[1]);

    return 0;
}
