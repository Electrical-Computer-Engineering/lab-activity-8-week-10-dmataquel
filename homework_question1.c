#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 32

int main () {
    char word[SIZE], piglatin[SIZE];
    int i, j, firstVowel, len;

    while (1) {
        printf ("Enter a word: ");
        scanf ("%s", word);

        len = strlen(word);

        for (i = 0; i < len; i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || (word[i] == 'y' && i > '0') || word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'U' || (word[i] == 'Y' && i > '0')) {
                firstVowel = i;
                break;
            }
        }
        
        if (i == len) {
            printf ("No vowels found in the %s\n", word);
            continue;
        }

        if (firstVowel == 0) {
            strcpy(piglatin, word);
            strcpy(piglatin, "way");
            piglatin[0] = toupper(piglatin[0]);
            printf("\tPig Latin: %s\n", piglatin);
        } else {
            j = 0;
            piglatin[j] = toupper(word[firstVowel]);
            for (i = firstVowel + 1; i < len; i++) {
                piglatin[j++] = word[i];
            }

            piglatin[j++] = word[0];
            for (i = 1; i < firstVowel; i++) {
                piglatin[j++] = word[i];
            }

            strcat(piglatin, "ay");
            piglatin[len+2] ='\0';
            printf ("\tPig Latin: %s\n", piglatin);
        }      
      
    }

    return 0;
}
