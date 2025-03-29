#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,b=4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf(" ");
		}
		b--;
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	b=2;
	for(i=3;i>=1;i--)
	{
		for(j=1;j<=b;j++)
		{
			printf(" ");
		}
		b++;
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
