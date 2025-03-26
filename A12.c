#include <stdio.h>
int main()
{
	float l,w,area,perimeter;
	printf("Enter the lenght: ");
	scanf("%d ", &l);
	printf("Enter the width: ");
	scanf("%d ", &w);
	area=l*w;
	perimeter=2*(l+w);
	printf("Area of the rectangle: ",area);
	printf("Perimeter of the rectangle: ",perimeter);
	return 0;
}
