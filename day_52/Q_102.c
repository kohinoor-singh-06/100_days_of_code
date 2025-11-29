#include <stdio.h>
int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;  
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x) {  
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    int index = findCeil(arr, n, x);
    printf("Output: %d\n", index);
    return 0;
}