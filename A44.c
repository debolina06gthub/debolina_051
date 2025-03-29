#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) // Base case: Fibonacci(0) = 0
        return 0;
    else if (n == 1) // Base case: Fibonacci(1) = 1
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms, i;

    // Ask the user for the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Check if the input is valid
    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i)); // Print each Fibonacci number
        }
        printf("\n");
    }

    return 0;
}
