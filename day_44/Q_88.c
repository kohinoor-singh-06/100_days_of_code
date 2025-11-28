#include <stdio.h>
void replaceSpaces(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }
    printf("Modified string: %s\n", str);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    replaceSpaces(str);
    return 0;
}