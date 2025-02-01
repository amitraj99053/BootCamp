// print number from 1 to n using recursion

#include <stdio.h>

void printNumbers(int current, int limit) {
    if (current > limit) {
        return; // Base case: stop when current exceeds limit
    }
    printf("%d ", current);
    printNumbers(current + 1, limit); // Recursive call
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    printf("Numbers from 1 to %d are:\n", n);
    printNumbers(1, n); // Start the recursion from 1
    printf("\n");

    return 0; // Indicate successful execution
}