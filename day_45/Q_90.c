#include <stdio.h>
void toggleCase(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32;
        else if(str[i] >= 'a' && str[i] <= 'z')  
            str[i] = str[i] - 32;
    }
    printf("Toggled string: %s\n", str);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    toggleCase(str);
    return 0;
}