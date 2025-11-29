#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Sorry sir, file not created \n");
        return 0;
    }
    printf("Enter your name: ");
    gets(name);   
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s Age: %d", name, age);
    fclose(fp); 
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}