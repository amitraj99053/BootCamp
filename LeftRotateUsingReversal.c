// C Code to left rotate an array using Reversal Algorithm

#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int* arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array by d elements to the left
void rotateArr(int* arr, int n, int d) {
    
    // Handle the case where d > size of array
    d %= n;

    // Reverse the first d elements
    reverse(arr, 0, d - 1);

    // Reverse the remaining n-d elements
    reverse(arr, d, n - 1);

    // Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    
    rotateArr(arr, n, d);
  
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
return 0;
}
