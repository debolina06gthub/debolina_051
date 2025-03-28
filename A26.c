#include <stdio.h>
int main()
{
	int num,factorial,i;
	printf("Enter a non-negative number : ");
	scanf("%d", &num);
	for(i=1;i<10;i++)
	{
		factorial=factorial*i;
	}
	printf("Factorial of %d=%d \n",num,factorial);
	return 0;
}
