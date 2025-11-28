/*Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);  

    printf("Area=%d\nPerimeter=%d\n", area, perimeter);

    return 0;
}