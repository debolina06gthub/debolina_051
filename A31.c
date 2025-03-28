#include <stdio.h>

int main() {
    int number, count = 0;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Make sure to work with the absolute value of the number
    number = (number < 0) ? -number : number;

    // Special case for zero
    if (number == 0) {
        count = 1;
    } else {
        // Count the number of digits
        while (number > 0) {
            number /= 10; // Remove the last digit
            count++;      // Increment the count
        }
    }

    // Display the result
    printf("The number of digits is: %d\n", count);

    return 0;
}
