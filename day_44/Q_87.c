#include <stdio.h>
void countCharacters(char str[]) {
    int i, spaces = 0, digits = 0, special = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue; 
        else
            special++;
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    countCharacters(str);
    return 0;
}