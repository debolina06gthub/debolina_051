#include <stdio.h>
int main() 
{
    int number, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    number = (number < 0) ? -number : number;
    while (number > 0) 
	{
        digit = number % 10; 
        sum += digit;        
        number /= 10;        
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
