// find maximum or minimum sum of a subarray of size k

#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

// Function to find the maximum subarray sum of size k
int maxSubarraySumK(int arr[], int n, int k) {
    if (k > n) {
        return -1; // Invalid input: k is larger than the array size
    }

    int max_sum = INT_MIN;
    int current_sum = 0;

    // Calculate the sum of the first k elements
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    // Slide the window of size k through the array
    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i]; // Subtract the leftmost element and add the rightmost element
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}


// Function to find the minimum subarray sum of size k (very similar)
int minSubarraySumK(int arr[], int n, int k) {
    if (k > n) {
        return -1; // Invalid input
    }

    int min_sum = INT_MAX;
    int current_sum = 0;

    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    min_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
    }
    return min_sum;
}


int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int max_sum = maxSubarraySumK(arr, n, k);
    printf("Maximum subarray sum of size %d: %d\n", k, max_sum); // Output: 16

    int min_sum = minSubarraySumK(arr, n, k);
    printf("Minimum subarray sum of size %d: %d\n", k, min_sum); // Output: -6

    int arr2[] = {1,2,3,4,5};
    n = sizeof(arr2) / sizeof(arr2[0]);
    k = 2;

    max_sum = maxSubarraySumK(arr2, n, k);
    printf("Maximum subarray sum of size %d: %d\n", k, max_sum); // Output: 9

    min_sum = minSubarraySumK(arr2, n, k);
    printf("Minimum subarray sum of size %d: %d\n", k, min_sum); // Output: 3

    return 0;
}