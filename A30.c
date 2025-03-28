#include <stdio.h>
int main()
 {
    long long number;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number);
    if (number < 0) 
	{
        number = -number;
    }
    do 
	{
        count++;
        number /= 10; 
    } while (number != 0);
    printf("The number of digits is: %d\n", count);
    return 0;
}

