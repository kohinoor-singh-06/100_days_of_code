#include <stdio.h>
int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if (k > 0 && k <= n)
        printf("Output: %d\n", arr[k-1]);
    else
        printf("Invalid value of k\n");
    return 0;
}