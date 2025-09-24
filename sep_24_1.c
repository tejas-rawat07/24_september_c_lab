#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, words = 0, in_Word = 0;

    printf("Enter a string-");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(!space(str[i]) && in_Word == 0) {
            in_Word = 1;   
            words++;
        }
        else if(space(str[i])) {
            in_Word = 0;   
        }
    }

    printf("Total number of words- %d\n", words);

    return 0;

}
