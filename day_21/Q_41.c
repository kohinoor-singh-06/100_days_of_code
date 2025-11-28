#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    if (num < 0) {
        num = -num; 
    }

    lastDigit = num % 10; 

    
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    
    int middle = num % (int)pow(10, digits);
    middle = middle / 10; 

    
    swappedNum = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;

    if (original < 0) {
        swappedNum = -swappedNum;
    }

    printf("Number after swapping first and last digit of %d = %d\n", original, swappedNum);

    return 0;
}