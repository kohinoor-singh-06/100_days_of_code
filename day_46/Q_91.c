#include <stdio.h>
void removeVowels(char str[]) {
    int i, j = 0;
    char result[100];
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; 
    printf("String after removing vowels: %s\n", result);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    removeVowels(str);
    return 0;
}