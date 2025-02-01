// write a program to perform binary search

#include <stdio.h>
#include <stdbool.h> // For using bool data type (C99 and later)

bool binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return false; // Base case: target not found
    }

    int mid = low + (high - low) / 2; // Calculate middle index (avoids overflow)

    if (arr[mid] == target) {
        return true; // Target found
    } else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target); // Search in the right half
    } else {
        return binarySearch(arr, low, mid - 1, target); // Search in the left half
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    bool found = binarySearch(arr, 0, n - 1, target);

    if (found) {
        printf("Target %d found in the array.\n", target);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}