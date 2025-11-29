#include <stdio.h>
int main() {
    FILE *fin, *fout;
    char ch;
    fin = fopen("input.txt", "r");
    if(fin == NULL) {
        printf("Error! input.txt not found \n");
        return 0;
    }
    fout = fopen("output.txt", "w");
    if(fout == NULL) {
        printf("Error! Could not create output file \n");
        fclose(fin);
        return 0;
    }
    while((ch = fgetc(fin)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   
        }
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    printf("File converted successfully! Check output.txt \n");
    return 0;
}