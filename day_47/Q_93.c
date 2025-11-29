#include <stdio.h>
#include <string.h>
#include <ctype.h>
void checkAnagram(char str1[], char str2[]) {
    int count1[26] = {0}, count2[26] = {0};
    int i;
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i])) {
            char ch = tolower(str1[i]);
            count1[ch - 'a']++;
        }
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i])) {
            char ch = tolower(str2[i]);
            count2[ch - 'a']++;
        }
    }
    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            printf("The strings are NOT anagrams.\n");
            return;
        }
    }
    printf("The strings are anagrams.\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);
    checkAnagram(str1, str2);
    return 0;
}