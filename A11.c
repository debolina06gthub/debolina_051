#include <stdio.h>
#include <math.h>
int main()
{
	int main()
	float p,r,t,ci,a;
	int n;
	printf("Enter the principle: ");
	scanf("%f", &p);
	printf("Enter the rate:");
	scanf("%f", &r);
	printf("Enter the time:");
	scanf("%f", &t);
	printf("Enter the number of times interest is applied:");
	scanf("%d", &n);
	r=r/100;
	a=p*pow((1+r/n),n*t);
	ci=a-p;
	printf("The compound interest:",ci);
	printf("the amount:",a);
	return 0;
}
