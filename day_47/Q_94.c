#include <stdio.h>
#include <string.h>
void findLongestWord(char str[]) {
    int i = 0, maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    findLongestWord(str);
    return 0;
}
