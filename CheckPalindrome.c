// check if a string ia a palindrome using recursion

#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using bool data type (C99 and later)

bool isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return true; // Base case: empty or single-character string is a palindrome
    } else if (str[start] != str[end]) {
        return false; // Not a palindrome
    } else {
        return isPalindrome(str, start + 1, end - 1); // Recursive call
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Be careful with scanf; it can lead to buffer overflows

    int len = strlen(str);
    bool result = isPalindrome(str, 0, len - 1);

    if (result) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}