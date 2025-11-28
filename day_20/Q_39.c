#include <stdio.h>

int main() {
    int num, product = 1, digit, hasOdd = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    
    if (num < 0) {
        num = -num;
    }

    
    while (num != 0) {
        digit = num % 10;       
        if (digit % 2 != 0) {   
            product *= digit;   
            hasOdd = 1;         
        }
        num /= 10;              
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %d\n", original, product);
    else
        printf("No odd digits found in %d.\n", original);

    return 0;
}
