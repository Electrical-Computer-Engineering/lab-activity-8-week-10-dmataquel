#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

void delete_string (char *str1, char *str2) {
    for (int i = 0; *(str1 + i) != '\0'; i++) {
        for (int j = 0; *(str2 + j) != '\0'; j++) {
            if (*(str1 + i) == *(str2 + j)) {
                for (int k = i; *(str1 + k) != '\0'; k++) {
                    *(str1 + k) = *(str1 + k + 1);
                }
                i--;
                break;
            }
        }
    }
}

int main () {
    char s1 [SIZE];
    char s2 [SIZE];

    printf ("Enter first string: \n");
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        printf ("Error reading first string\n");
        exit(EXIT_FAILURE);
    }

    printf ("Enter second string: \n");
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        printf ("Error reading second string\n");
        exit(EXIT_FAILURE);
    }

    delete_string (s1, s2);
    printf ("%s", s1);
    return 0;
}