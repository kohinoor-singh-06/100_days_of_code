#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int n1 = strlen(s);
    int n2 = strlen(t);
    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }
    int count[26] = {0};
    for (int i = 0; i < n1; i++)
        count[s[i] - 'a']++;
    for (int i = 0; i < n2; i++)
        count[t[i] - 'a']--;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}