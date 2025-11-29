#include <stdio.h>
int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prevGreater;
    for (int i = 0; i < n; i++) {
        prevGreater = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; 
            }
        }
        printf("%d", prevGreater);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
    return 0;
}