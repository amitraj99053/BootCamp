//  subarray with a given sum using the sliding window technique
#include <stdio.h>
#include <stdbool.h> // For boolean type

// Function to find a subarray with a given sum using sliding window
bool findSubarrayWithSum(int arr[], int n, int target_sum) {
    int current_sum = 0;
    int start_index = 0; // Start of the window

    for (int end_index = 0; end_index < n; end_index++) { // End of the window
        current_sum += arr[end_index];

        while (current_sum > target_sum && start_index <= end_index) {
            current_sum -= arr[start_index];
            start_index++;
        }

        if (current_sum == target_sum) {
            printf("Subarray found from index %d to %d\n", start_index, end_index);
            return true; // Subarray found
        }
    }

    return false; // No subarray found
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 9;
    if (findSubarrayWithSum(arr1, n1, target1)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Subarray found from index 2 to 4, Found

    int arr2[] = {1, 4, 20, 3, 10, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 33;
    if (findSubarrayWithSum(arr2, n2, target2)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Subarray found from index 2 to 4, Found

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 15;
    if (findSubarrayWithSum(arr3, n3, target3)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Subarray found from index 0 to 4, Found

    int arr4[] = {1, 2, 3, 4, 5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 12;
    if (findSubarrayWithSum(arr4, n4, target4)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Subarray found from index 1 to 3, Found

    int arr5[] = {1, 2, 3, 4, 5};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int target5 = 18;
    if (findSubarrayWithSum(arr5, n5, target5)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Not Found

    int arr6[] = {1, 2, 3, 4, 5};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    int target6 = 0; // Target sum is 0
    if (findSubarrayWithSum(arr6, n6, target6)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Not Found (because no subarray sums to 0 in this example)


    return 0;
}