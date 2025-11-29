#include <stdio.h>
int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; 
    if (k > n) {
        printf("Error: k cannot be greater than array size.\n");
        return 0;
    }
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0; 
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break; 
            }
        }
        printf("%d", firstNeg);
        if (i != n - k)
            printf(" ");
    }
    printf("\n");
    return 0;
}