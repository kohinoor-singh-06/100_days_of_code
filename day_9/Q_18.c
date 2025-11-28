/*Q18 (Conditional Statements)
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include <stdio.h>

int main() {
    int percent;

    printf("Enter percentage: ");
    scanf("%d", &percent);

    if (percent >= 90 && percent <= 100) {
        printf("Grade A\n");
    }
    else if (percent >= 80 && percent <= 89) {
        printf("Grade B\n");
    }
    else if (percent >= 70 && percent <= 79) {
        printf("Grade C\n");
    }
    else if (percent >= 60 && percent <= 69) {
        printf("Grade D\n");
    }
    else if (percent >= 0 && percent < 60) {
        printf("Grade F\n");
    }
    else {
        printf("Invalid percentage!\n"); // For values outside 0–100
    }

    return 0;
}