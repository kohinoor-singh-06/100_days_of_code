#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "abcabcbb";
    int n = strlen(s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    int maxLength = 0;
    int start = 0; 
    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;

        if (i - start + 1 > maxLength)
            maxLength = i - start + 1;
    }
    printf("Output: %d\n", maxLength);
    return 0;
}