#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Make sure to work with the absolute value of the number
    int originalNumber = (number < 0) ? -number : number;

    // Reverse the number
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        originalNumber /= 10; // Remove the last digit
    }

    // If the original number was negative, make the reversed number negative
    if (number < 0) {
        reversedNumber = -reversedNumber;
    }

    // Display the result
    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
