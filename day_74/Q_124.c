#include <stdio.h>
int main() {
    FILE *source, *dest;
    char srcName[50], destName[50];
    char ch;
    printf("Enter source file name: ");
    gets(srcName);  
    printf("Enter destination file name: ");
    gets(destName);
    source = fopen(srcName, "r");
    if(source == NULL) {
        printf("Source file not found \n");
        return 0;
    }
    dest = fopen(destName, "w");
    if(dest == NULL) {
        printf("Could not create destination file \n");
        fclose(source);
        return 0;
    }
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("File copied successfully to %s \n", destName);
    return 0;
}