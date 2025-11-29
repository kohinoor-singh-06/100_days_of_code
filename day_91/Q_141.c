#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);

    return 0;
}