#include <stdio.h>
int main() {
    FILE *fp;
    char filename[50];
    char line[100];
    printf("Enter the file name: ");
    gets(filename);  
    fp = fopen(filename, "r");   
    if(fp == NULL) {
        printf("Error: File does not exist! \n");
        return 0;
    }
    printf("File opened successfully. \n");
    printf("File content is:\n\n");

    while(fgets(line, 100, fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}