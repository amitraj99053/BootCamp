// find maximum subarray sum

#include <stdio.h>
#include <limits.h> // For INT_MIN

// Kadane's Algorithm (most efficient)
int maxSubarraySum(int arr[], int n) {
    int max_so_far = INT_MIN; // Initialize with the smallest possible integer
    int max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0; // Reset if the current sum becomes negative
        }
    }
    return max_so_far;
}



//Alternative (less efficient) method: Brute-force (O(n^2))
int maxSubarraySumBruteForce(int arr[], int n) {
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }
    return max_sum;
}



int main() {
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Maximum subarray sum (Kadane's): %d\n", maxSubarraySum(arr1, n1)); // Output: 6
    printf("Maximum subarray sum (Brute Force): %d\n", maxSubarraySumBruteForce(arr1, n1)); // Output: 6


    int arr2[] = {-1, -2, -3, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Maximum subarray sum (Kadane's): %d\n", maxSubarraySum(arr2, n2)); // Output: -1 (all negative)
    printf("Maximum subarray sum (Brute Force): %d\n", maxSubarraySumBruteForce(arr2, n2)); // Output: -1 (all negative)


    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Maximum subarray sum (Kadane's): %d\n", maxSubarraySum(arr3, n3)); // Output: 15
    printf("Maximum subarray sum (Brute Force): %d\n", maxSubarraySumBruteForce(arr3, n3)); // Output: 15

     int arr4[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Maximum subarray sum (Kadane's): %d\n", maxSubarraySum(arr4, n4)); // Output: 7
    printf("Maximum subarray sum (Brute Force): %d\n", maxSubarraySumBruteForce(arr4, n4)); // Output: 7

    return 0;
}