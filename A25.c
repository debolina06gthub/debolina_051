#include <stdio.h>
int main()
{
	int num,i;	
	printf("Enter a number to display its multiplication table: ");
	scanf("%d", &num);
	printf("Multiplication table for %d :\n",num);
	for(i=1;i<10;i++)
	{
		printf("%d*%d=%d \n",num,i,num*i);
	}
	return 0;
}
