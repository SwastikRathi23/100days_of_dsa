#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int k = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    while(k < n) {
        nums[k] = 0;
        k++;
    }

    printf("Updated array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}