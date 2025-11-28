#include <stdio.h>

int main() {
    long long binary, onesComp = 0;
    int digit, place = 1;

    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long original = binary; 

    
    while (binary != 0) {
        digit = binary % 10;   

        if (digit == 0)
            onesComp += 1 * place;   
        else if (digit == 1)
            onesComp += 0 * place;   
        else {
            printf("Invalid binary number!\n");
            return 0;
        }

        binary /= 10;        
        place *= 10;           
    }

    printf("1's Complement of %lld = %lld\n", original, onesComp);

    return 0;
}