#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Func to gen valid key for a giv usr */
void generate_key(const char *username) {
    char key[32];  /* Def char array to str key */

    /* Calcul the key based on the usr */
    snprintf(key, sizeof(key), "%s_key", username);

    /* Prnt the gen key */
    printf("%s\n", key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return 1;
    }

    /* Call the key gen func with the prov usr */
    generate_key(argv[1]);

    return 0;
}
