#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) // Base case: if b is 0, GCD is a
        return a;
    else
        return gcd(b, a % b); // Recursive case
}

int main() {
    int num1, num2;
    
    // Ask the user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check if the input is valid
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
    } else {
        // Calculate GCD
        int result = gcd(num1, num2);
        printf("GCD of %d and %d = %d\n", num1, num2, result);
    }
    
    return 0;
}
