#include <stdio.h>
int main()
{
	int a,b,c,temp;
	printf("Enter the value for a: ");
	scanf("%d", & a);
	printf("Enter the value for b: ");
	scanf("%d", & b);
	printf("Enter the value for c: ");
	scanf("%d", & c);
	printf("\n Original values: ");
	printf("a=%d,b%d,c=%d /n ",a,b,c);
	temp=a;
	a=b;
	b=c;
	temp=c;
	printf("\n Swapped values: \n ");
	printf("a=%d,b=%d,c=%d \n",a,b,c);
	return 0;
	
	
}
