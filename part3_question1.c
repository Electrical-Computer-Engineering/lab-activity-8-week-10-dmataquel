
#include <stdio.h>

int main () {
    char str[30], *i;
    
    printf ("Input a string: \n");
    scanf ("%s", &str);

    int ct = 1;
    while (ct <= 4) {
        printf ("%s \n", str);
        i = str;

        while (*i != '\0') {
            *i = *(i + 1);
            i++;
        }

        ct++;
    }
    return 0;
}