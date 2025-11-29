#include <stdio.h>
int main() {
    int n, i, sum = 0, total, missing;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];  
    }
    total = n * (n + 1) / 2;
    missing = total - sum;
    printf("Missing number is %d", missing);
    return 0;
}