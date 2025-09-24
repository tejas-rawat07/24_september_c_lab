#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max_Len = 0, current_Len = 0;

    printf("Enter a sentence- ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
            current_Len++;
        }
        
        else {
            word[j] = '\0';  
            if (current_Len > max_Len) {
                max_Len = current_Len;
                strcpy(longest, word);
            }
            j = 0;
            current_Len = 0;
        }


        if (str[i] == '\0')
            break;
            i++;
    }

    printf("The longest word is- %s\n", longest);
    printf("Length: %d\n", max_Len);

    return 0;
}