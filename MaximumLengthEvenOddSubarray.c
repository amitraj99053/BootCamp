//  find the maximum length even-odd subarray

#include <stdio.h>

int maxEvenOddSubarray(int arr[], int n) {
    int max_length = 0;
    int current_length = 0;

    if (n == 0) return 0; // Handle empty array

    current_length = 1; // Start with the first element
    max_length = 1;

    for (int i = 1; i < n; i++) {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
            current_length++;
        } else {
            current_length = 1; // Reset if the condition is not met
        }
        if (current_length > max_length) {
            max_length = current_length;
        }
    }
    return max_length;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr1, n1)); // Output: 5

    int arr2[] = {5, 4, 2, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr2, n2)); // Output: 3

    int arr3[] = {1, 1, 1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr3, n3)); // Output: 1

    int arr4[] = {2, 2, 2, 2, 2};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr4, n4)); // Output: 1

    int arr5[] = {1, 2, 3, 2, 3, 4, 5};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr5, n5)); // Output: 3

    int arr6[] = {}; // Empty array
    int n6 = sizeof(arr6) / sizeof(arr6[0]); // Will be 0
    printf("Max length even-odd subarray: %d\n", maxEvenOddSubarray(arr6, n6)); // Output: 0

    return 0;
}