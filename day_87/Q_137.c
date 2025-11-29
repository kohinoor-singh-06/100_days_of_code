#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    scanf("%s", input);

    enum Role r;

    if(strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if(strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    if(r == ADMIN)
        printf("Welcome Admin!");
    else if(r == USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");

    return 0;
}