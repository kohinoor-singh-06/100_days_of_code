#include <stdio.h>
int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;  
        }

        leftSum += arr[i];
    }
    return -1;
}
int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivotIndex(arr, n);
    printf("Output: %d\n", pivot);
    return 0;
}