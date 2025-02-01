// reverse a string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end) {
    if (start >= end) {
        return; // Base case: nothing left to reverse
    } else {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recursively reverse the remaining substring
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    char str[100]; // Assuming a maximum string length of 99 + null terminator

    printf("Enter a string: ");
    scanf("%s", str); // Be careful with scanf; it can lead to buffer overflows

    int len = strlen(str);
    reverseString(str, 0, len - 1); // Start the recursion

    printf("Reversed string: %s\n", str);

    return 0;
}