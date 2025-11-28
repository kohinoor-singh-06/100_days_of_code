#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    int numerator = 2, denominator = 3;


    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;      
        denominator += 4;    
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}