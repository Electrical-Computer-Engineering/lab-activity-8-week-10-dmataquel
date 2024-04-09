#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strcmp (char* string1, char* string2) {
    while (*string1 == *string2) {
        if (*string1 == '\0') {
            return 0;
        }

        string1++;
        string2++;
    }
    return 1;
}

int my_strncmp (char* string1, char* string2, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (*string1 == *string2) {
            j = 0;
            string1++;
            string2++;
        } else {
            j = 1;
            break;
        }
    }
    return j;
}

char* my_strcpy (char* string1, char* string2) {
    char* first = string1;
    while (*string1 !='\0') {
        *string1 = *string2;
        string1++;
        string2++;
    }
    return first;
}

char* my_strcat (char* string1, char* string2) {
    char *first = string1;
    while (*string1 = '\0') {
        *string1 = *string2;
        string2++;
        string1++;
    }
    return first;
}

char* my_reverse (char* string1, char* string2) {
    char* first = string1;
    while (*string2 != '\0') {
        string2++;
    }
    string2--;
    while (*(string2) != '\0') {
        *string1 = *string2;
        string2--;
        string1++;
    }
    return first;
}

int main () {
    char str1[100], str2[100];
    int choice;

    printf ("Select a function from the choices below: \n");
    printf ("1 my_strcmp \n");
    printf ("2 my_strncmp \n");
    printf ("3 my_strcpy \n");
    printf ("4 my_strcat \n");
    printf ("5 my_reverse \n");
    scanf ("%d", &choice);

    printf ("\n Enter your first string: ");
    scanf ("%s, str1");
    printf ("\n Enter your second string: ");
    scanf ("%s, str2");
    switch (choice) {
        case 1:
        my_strcmp (str1, str2);
        break;
        case 2:
        my_strncmp (str1, str2,3);
        case 3:
        my_strcpy (str1, str2);
        case 4:
        my_strcat (str1, str2);
        case 5:
        my_reverse (str1,str2);
        default:
        printf ("Wrong input");
    }
}
