#include <stdio.h>
void firstRepeatingChar(char str[]) {
    int i;
    int freq[26] = {0};
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2) {  
                printf("First repeating lowercase character: %c\n", ch);
                return;
            }
        }
    }
    printf("No repeating lowercase character found.\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    firstRepeatingChar(str);
    return 0;
}