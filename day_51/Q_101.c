#include <stdio.h>
int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    int first = -1, last = -1;
    printf("Enter the number you want to find: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;  
            last = i;      
        }
    }
    if (first == -1)
        printf("-1, -1\n");
    else
        printf("%d, %d\n", first, last);
    return 0;
}