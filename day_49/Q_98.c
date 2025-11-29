#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printInitialsWithSurname(char str[]) {
    int i = 0;
    int lastSpace = -1;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            lastSpace = i;
    }
    for(i = 0; i <= lastSpace; i++) {
        if(i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            printf("%c.", toupper(str[i]));
        }
    }
    if(lastSpace != -1) {
        printf("%s\n", &str[lastSpace + 1]);
    } else {
        printf("%s\n", str);
    }
}
int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 
    printf("Name with initials: ");
    printInitialsWithSurname(name);
    return 0;
}