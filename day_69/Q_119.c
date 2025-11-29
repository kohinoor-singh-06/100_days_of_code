#include <stdio.h>
int main() {
    int n, i, j, repeat;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                repeat = arr[i];
                break;
            }
        }
    }
    printf("Repeated number is %d", repeat);
    return 0;
}