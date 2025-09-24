#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a sentence-");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);   
        }

        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);   
        }
    }


    printf("now the sentence is - %s\n", str);

    return 0;

}
