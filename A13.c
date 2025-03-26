#include <stdio.h>
#include <math.h>
int main() 
{
    double number, floorValue, ceilingValue;
    printf("Enter a number: ");
    scanf("%lf", &number);
    floorValue = floor(number);
    ceilingValue = ceil(number);
    printf("Floor value of %.2f is: %.0f\n", number, floorValue);
    printf("Ceiling value of %.2f is: %.0f\n", number, ceilingValue);
    return 0;
}
