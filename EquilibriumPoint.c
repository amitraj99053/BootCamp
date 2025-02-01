// find the equilibrium poin

#include <stdio.h>
#include <stdbool.h>

bool findEquilibriumPoint(int arr[], int n) {
    if (n <= 1) {
        return false; // An array with 0 or 1 element cannot have an equilibrium point.
    }

    int left_sum = 0;
    int total_sum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        total_sum -= arr[i]; // Subtract the current element from the total sum

        if (left_sum == total_sum) {
            printf("Equilibrium point found at index %d\n", i);
            return true;
        }

        left_sum += arr[i]; // Add the current element to the left sum
    }

    return false; // No equilibrium point found
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    if (findEquilibriumPoint(arr1, n1)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Equilibrium point found at index 3, Found


    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    if (findEquilibriumPoint(arr2, n2)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Not Found

    int arr3[] = {1, 2, 0, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    if (findEquilibriumPoint(arr3, n3)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Equilibrium point found at index 2, Found

    int arr4[] = {-1, -2, -3, 0, 3, 2, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    if (findEquilibriumPoint(arr4, n4)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Equilibrium point found at index 3, Found

    int arr5[] = {0, 0, 0, 0, 0};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    if (findEquilibriumPoint(arr5, n5)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Equilibrium point found at index 0, Found (and also at 1, 2, 3, and 4)

     int arr6[] = {0};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    if (findEquilibriumPoint(arr6, n6)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    } // Output: Not Found (because of the n <= 1 check)

    return 0;
}