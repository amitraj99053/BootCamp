// find majority element in array
#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int majorityElement = arr[0]; // Assume the first element is the majority initially
    int count = 1; // Count of the current majority element

    for (int i = 1; i < n; i++) {
        if (arr[i] == majorityElement) {
            count++;
        } else {
            count--;
            if (count == 0) {
                majorityElement = arr[i]; // Update majority if count becomes 0
                count = 1;
            }
        }
    }

    // Verify if the assumed majority element is actually the majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == majorityElement) {
            count++;
        }
    }

    if (count > n / 2) {
        return majorityElement; // It's a valid majority element
    } else {
        return -1; // No majority element exists
    }
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majority = findMajorityElement(arr, n);

    if (majority != -1) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}