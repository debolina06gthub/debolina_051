#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0) // Base case: factorial of 0 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    
    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the input is a non-negative integer
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        unsigned long long result = factorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    }
    
    return 0;
}

