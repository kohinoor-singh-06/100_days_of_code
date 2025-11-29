#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender g;
};

int main() {
    char input[10];
    scanf("Gender=%s", input);

    struct Person p;

    if(strcmp(input, "MALE") == 0)
        p.g = MALE;
    else
        p.g = FEMALE;

    if(p.g == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}