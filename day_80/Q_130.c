#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    fp = fopen("students.txt", "w");   

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");
    fclose(fp);
    printf("Data written to file successfully.\n\n");
    fp = fopen("students.txt", "r");   
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}