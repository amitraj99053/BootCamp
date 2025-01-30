// C Program for Maximum Subarray Sum using Kadane's Algorithm

#include <stdio.h>
#include <limits.h>

// Function to find the maximum subarray sum
int maxSubarraySum(int arr[], int size) {
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < size; i++) {
        
        // Find the maximum sum ending at index i by either extending 
        // the maximum sum subarray ending at index i - 1 or by
        // starting a new subarray from index i
        maxEnding = (maxEnding + arr[i] > arr[i]) ? 
                                              maxEnding + arr[i] : arr[i];
      
        // Update res if maximum subarray sum ending at index i > res
        res = (res > maxEnding) ? res : maxEnding;
    }
    return res;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%lld\n", maxSubarraySum(arr, size));
return 0;
}
