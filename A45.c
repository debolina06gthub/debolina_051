#include <stdio.h>
int sum_of_squares(int n)
{
	if(n==0)
	return 0;
	return n*n+sum_of_squares(n-1);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of squares of first %d natural number is: %d \n",n,sum_of_squares(n));
	return 0;
}
