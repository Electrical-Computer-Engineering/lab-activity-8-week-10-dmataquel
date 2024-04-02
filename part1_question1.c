#include <stdio.h>

int my_isdigit (int d) {
    if ( d>= '0' && d <= '9') {
        return 1;
    }
    return 0;
}

int my_isalpha (char ch) {
    if ((ch >= 'a' && ch <= 'z') | (ch >= 'A' && ch <= 'Z')) {
        return 1;
    }
    return 0;
}

char my_is_upper (char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    return 0;
}

char my_to_upper (char ch) {
    if (ch >= 'a' && ch <= 'z') {
        char res = ch - 'A' + 'a';
        return res;
    }
    return ch;
}

char my_to_lower (char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        char res = ch - 'a' + 'A';
        return res;
    }
    return ch;
}

int main () {
    char a = '3';
    char b = 'R';
    char c = 'g';
    char d = '$';
    printf("%d\n",my_isdigit(a)); 
    printf("%d\n",my_isdigit(b)); 
    printf("%d\n",my_isalpha(b)); 
    printf("%d\n",my_isalpha(d));
    printf("%c\n",my_is_upper(b));
    printf("%c\n",my_is_upper(c));
    printf("%c\n",my_to_upper(c));  
    printf("%c\n",my_to_upper(d));  
    printf("%c\n",my_to_lower(b));  
    printf("%c\n",my_to_lower(c)); 
    
    return 0;    
}
