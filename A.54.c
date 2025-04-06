#include <stdio.h>

// Function to demonstrate call by value
void callByValue(int a) {
    a = a + 10; // Modify the value of a
    printf("Inside callByValue: a = %d\n", a);
}

// Function to demonstrate call by reference
void callByReference(int *b) {
    *b = *b + 10; // Modify the value at the address pointed to by b
    printf("Inside callByReference: b = %d\n", *b);
}

int main() {
    int x = 5;
    int y = 5;

    printf("Before callByValue: x = %d\n", x);
    callByValue(x); // Call by value
    printf("After callByValue: x = %d\n", x); // x remains unchanged

    printf("\nBefore callByReference: y = %d\n", y);
    callByReference(&y); // Call by reference
    printf("After callByReference: y = %d\n", y); // y is modified

    return 0;
}
