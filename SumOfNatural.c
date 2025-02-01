// sum of natural no using recursion

#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 natural numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive step
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Sum of natural numbers is not defined for negative numbers.\n");
    } else {
        int sum = sumOfNaturalNumbers(num);
        printf("Sum of natural numbers up to %d is: %d\n", num, sum);
    }

    return 0;
}