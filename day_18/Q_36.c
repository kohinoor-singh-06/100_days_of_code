#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    int x = a, y = b;

    
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("HCF (GCD) of %d and %d = %d\n", x, y, a);

    return 0;
}