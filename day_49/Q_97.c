#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printInitials(char str[]) {
    int i = 0;
    if(str[i] != ' ' && str[i] != '\0')
        printf("%c", toupper(str[i]));

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c", toupper(str[i + 1]));
        }
    }
    printf("\n");
}
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 
    printf("Initials: ");
    printInitials(name);
    return 0;
}