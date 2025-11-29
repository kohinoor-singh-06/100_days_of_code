#include <stdio.h>
int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter %d elements for first array: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d elements for second array: ", n);
    for(int j = 0; j < n; j++) {
        scanf("%d", &nums2[j]);
    }
    int merged[m + n];
    for(int i = 0; i < m; i++) {
        merged[i] = nums1[i];
    }
    for(int j = 0; j < n; j++) {
        merged[m + j] = nums2[j];
    }
    int total = m + n;
    for(int i = 0; i < total - 1; i++) {
        for(int j = i + 1; j < total; j++) {
            if(merged[i] > merged[j]) {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    printf("Merged sorted array: ");
    for(int i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}