#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number for comparison later
    originalNumber = number;

    // Make sure to work with the absolute value of the number
    number = (number < 0) ? -number : number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Check if the original number is a palindrome
    if (originalNumber < 0) {
        originalNumber = -originalNumber; // Make it positive for comparison
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
