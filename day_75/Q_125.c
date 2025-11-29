#include <stdio.h>
int main() {
    FILE *fp;
    char filename[50];
    char text[200];
    printf("Enter file name: ");
    gets(filename);   
    fp = fopen(filename, "a");  
    if(fp == NULL) {
        printf("File not found \n");
        return 0;
    }
    printf("Enter text to add at the end: ");
    gets(text);  
    fprintf(fp, "\n%s", text); 
    fclose(fp);
    printf("File updated successfully with appended text \n");
    return 0;
}