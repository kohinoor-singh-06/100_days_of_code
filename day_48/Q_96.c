#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void reverseEachWord(char str[]) {
    int start = 0, i = 0;
    while(1) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
        i++;
    }
    printf("Modified sentence: %s\n", str);
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    reverseEachWord(str);
    return 0;
}