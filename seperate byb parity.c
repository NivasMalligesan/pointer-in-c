#include <stdio.h>
#include <stdlib.h>

void swap(int* left , int* right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void sortArrayByParity(int* nums, int numSize) {
    int left = 0; 
    int right = numSize - 1;

    while (left < right) { 
        while (left < right && nums[left] % 2 == 0) {
            left++;
        }

        while (left < right && nums[right] % 2 != 0) {
            right--;
        }

        if (left < right) {
            swap(&nums[left], &nums[right]);
        }
    }
}

int main() {
    int numSize = 0; 
    printf("Enter the number of tickets: ");
    scanf("%d", &numSize);
    
    int *nums = (int*)malloc(numSize * sizeof(int));
    
    printf("Enter the ticket numbers: ");
    for (int i = 0; i < numSize; i++) {
        scanf("%d", &nums[i]);
    }
    
    sortArrayByParity(nums, numSize);
    
    printf("Array sorted by parity: ");
    for (int i = 0; i < numSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    free(nums); // Free the allocated memory
    return 0;
}
