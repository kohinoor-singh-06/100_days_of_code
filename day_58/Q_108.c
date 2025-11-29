#include <stdio.h>
int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]\n");
    return 0;
}