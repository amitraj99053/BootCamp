//  w.a.p.t.f. the maximum consecutive 1's in a binary array

#include <stdio.h>

int maxConsecutiveOnes(int arr[], int n) {
    int max_count = 0; // Stores the maximum consecutive 1s found so far
    int current_count = 0; // Stores the current consecutive 1s count

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            current_count++; // Increment count if current element is 1
        } else {
            // If current element is 0, reset current count and update max count if needed
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 0; // Reset for the next sequence of 1s
        }
    }

    // Check one last time after the loop finishes, in case the sequence of 1s was at the end of the array.
    if (current_count > max_count) {
        max_count = current_count;
    }


    return max_count;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxConsecutiveOnes(arr, n);
    printf("Maximum consecutive 1's: %d\n", result);  // Output: 3

    int arr2[] = {1, 1, 1, 1, 1};
    n = sizeof(arr2) / sizeof(arr2[0]);
    result = maxConsecutiveOnes(arr2, n);
    printf("Maximum consecutive 1's: %d\n", result); // Output: 5

     int arr3[] = {0, 0, 0, 0};
    n = sizeof(arr3) / sizeof(arr3[0]);
    result = maxConsecutiveOnes(arr3, n);
    printf("Maximum consecutive 1's: %d\n", result); // Output: 0

    int arr4[] = {1, 0, 1, 1, 1, 1, 0, 1};
    n = sizeof(arr4) / sizeof(arr4[0]);
    result = maxConsecutiveOnes(arr4, n);
    printf("Maximum consecutive 1's: %d\n", result); // Output: 4

    return 0;
}