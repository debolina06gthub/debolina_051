#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long first = 0, second = 1, next;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
    } else if (n == 1) 
	{
        printf("Fibonacci Series: %llu\n", first);
    } else
	 {
        printf("Fibonacci Series: %llu, %llu", first, second);
        for (i = 3; i <= n; i++) 
	{
        next = first + second; 
        printf(", %llu", next); 
        first = second; 
        second = next; 
    }
        printf("\n");
    }
    return 0;
}
