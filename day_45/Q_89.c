#include <stdio.h>
void countFrequency(char str[], char ch) {
    int i, count = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
}
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str); 
    printf("Enter the character to count: ");
    scanf("%c", &ch);
    countFrequency(str, ch);
    return 0;
}

