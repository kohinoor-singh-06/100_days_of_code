#include <stdio.h>
int main() {
    int n, i, j, num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            break;
        }
    }
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = num;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}