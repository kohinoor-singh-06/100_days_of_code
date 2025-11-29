#include <stdio.h>
int findMajorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > n / 2)
            return arr[i];
    }
    return -1; 
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMajorityElement(arr, n);
    printf("Output: %d\n", result);
    return 0;
}