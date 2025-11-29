#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    float salary;
};

int main() {

    struct Employee e, e_read;
    FILE *fp;

   
    scanf("%s %d %f", e.name, &e.id, &e.salary);

   
    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");
    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

   
    printf("Name: %s | ID: %d | Salary: %.2f",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}