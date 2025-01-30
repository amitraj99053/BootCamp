// C Recursive approach to check if an
// Array is sorted or not

#include <stdio.h>

// Function that returns true if array is
// sorted in non-decreasing order.
int arraySortedOrNot(int a[], int n)
{
    // Base case
    if (n == 1 || n == 0) {
        return 1;
    }

    // Check if present index and index
    // previous to it are in correct order
    // and rest of the array is also sorted
    // if true then return true else return
    // false
    return a[n - 1] >= a[n - 2]
           && arraySortedOrNot(a, n - 1);
}

// Driver code
int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    if (arraySortedOrNot(arr, n)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

return 0;
}
