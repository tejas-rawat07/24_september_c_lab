#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, alphabet = 0, digits = 0, special = 0;

    printf("Enter a string-");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabet++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (str[i] != '\n' && str[i] != ' ') { 
            special++;
        }
    }

    printf("alphabets- %d\n", alphabet);
    printf("digits- %d\n", digits);
    printf("special characters- %d\n", special);

    return 0;
}