#include <stdio.h>

int main() {
    int a, b, x, y, hcf, lcm;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    x = a;
    y = b;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    
    lcm = (x * y) / hcf;

    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}