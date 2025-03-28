#include <stdio.h>
int main() 
{
    int sum = 0;
    int count = 0;
    int number = 1;
    while (count < 10) 
	{
    sum += number; 
    number += 2;   
    count++;    
    }
    printf("The sum of the first 10 odd natural numbers is: %d\n", sum);
    return 0;
}
