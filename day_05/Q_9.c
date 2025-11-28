/*Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>   

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);


    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}