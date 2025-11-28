#include <stdio.h>

int main() {
    int num, remainder;
    unsigned long long binary = 0;
    long long place = 1;  


    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int original = num;

    if (num == 0) {
        printf("Binary of 0 = 0\n");
        return 0;
    }

    
    while (num > 0) {
        remainder = num % 2;
        binary = binary + remainder * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary of %d = %llu\n", original, binary);

    return 0;
}