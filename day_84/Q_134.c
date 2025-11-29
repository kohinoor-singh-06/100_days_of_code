#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[10];
    scanf("%s", input);

    enum Status s;

    if(strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if(strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else
        s = TIMEOUT;

    if(s == SUCCESS)
        printf("Operation successful");
    else if(s == FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");

    return 0;
}