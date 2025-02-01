// find the sum of any subarray using the prefix sum array

#include <stdio.h>

// Function to calculate prefix sum array
void calculatePrefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

// Function to find the sum of a subarray using the prefix sum array
int subarraySum(int prefixSum[], int start, int end) {
    if (start == 0) {
        return prefixSum[end];
    } else {
        return prefixSum[end] - prefixSum[start - 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];

    calculatePrefixSum(arr, n, prefixSum);

    // Example usage:
    int start = 1; // Start index of the subarray (inclusive)
    int end = 3;   // End index of the subarray (inclusive)

    int sum = subarraySum(prefixSum, start, end);
    printf("Sum of subarray from index %d to %d: %d\n", start, end, sum); // Output: 9 (2 + 3 + 4)

    start = 0;
    end = 4;
    sum = subarraySum(prefixSum, start, end);
    printf("Sum of subarray from index %d to %d: %d\n", start, end, sum); // Output: 15 (1+2+3+4+5)

    start = 2;
    end = 2;
    sum = subarraySum(prefixSum, start, end);
    printf("Sum of subarray from index %d to %d: %d\n", start, end, sum); // Output: 3

    return 0;
}