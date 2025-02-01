// print number from n to 1 using recursion

#include <stdio.h>

void printNumbers(int current) {
    if (current < 1) {
        return; // Base case: stop when current is less than 1
    }
    printf("%d ", current);
    printNumbers(current - 1); // Recursive call with decremented value
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    printf("Numbers from %d to 1 are:\n", n);
    printNumbers(n); // Start the recursion from n
    printf("\n");

    return 0; // Indicate successful execution
}