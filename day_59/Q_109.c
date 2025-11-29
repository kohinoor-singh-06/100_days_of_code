#include <stdio.h>
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; 

    if (k > n) {
        printf("Error: k cannot be greater than array size.\n");
        return 0;
    }
    int currentSum = 0;

    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Output: %d\n", maxSum);
    return 0;
}