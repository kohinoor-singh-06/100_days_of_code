#include <stdio.h>
#include <string.h>
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int i, flag = 0;
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    checkPalindrome(str);
    return 0;
}