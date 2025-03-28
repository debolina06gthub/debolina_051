#include <stdio.h>
int main()
{
	int n=10,sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=(i*i);
	}
	printf("The sum of square of first 10 natural numbers is %d:%d",n,sum);
	return 0;
}
