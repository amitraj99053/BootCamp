// find the power of two using recursion

#include <stdio.h>

long long powerOfTwo(int n) {
    if (n == 0) {
        return 1; // Base case: 2^0 = 1
    } else if (n < 0) {
        return -1; // Or handle negative powers differently if needed (e.g., using floats)
    } else {
        return 2 * powerOfTwo(n - 1); // Recursive step: 2^n = 2 * 2^(n-1)
    }
}

int main() {
    int n;

    printf("Enter the power (n): ");
    scanf("%d", &n);

    long long result = powerOfTwo(n);

    if (result == -1) {
      printf("Power is negative. This function only handles positive powers for now.\n");
    }
    else {
      printf("2 raised to the power of %d is: %lld\n", n, result);
    }

    return 0;
}