#include <stdio.h>
int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nextGreater;
    for (int i = 0; i < n; i++) {
        nextGreater = -1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; 
            }
        }
        printf("%d", nextGreater);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
    return 0;
}