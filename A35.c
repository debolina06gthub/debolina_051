#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, count = 0, sum = 0;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        count++;
    }

    originalNumber = number; // Reset originalNumber to the input number

    // Calculate the sum of the digits raised to the power of count
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        sum += pow(remainder, count); // Raise to the power of count and add to sum
        number /= 10; // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
