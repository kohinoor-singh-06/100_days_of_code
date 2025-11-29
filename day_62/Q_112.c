#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];
    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    printf("Output: %d\n", maxSoFar);
    return 0;
}