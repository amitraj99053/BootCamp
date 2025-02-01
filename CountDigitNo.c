// write a program to count the digits in a number using recursion

#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0; // Base case: 0 has 0 digits
    } else {
        return 1 + countDigits(n / 10); // Recursive step
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Number of digits is not defined for negative numbers (in this implementation).\n");
        return 1; // Indicate an error
    }

    int count = countDigits(num);
    printf("Number of digits in %d is: %d\n", num, count);

    return 0; // Indicate successful execution
}