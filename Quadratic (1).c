#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,d,f;
	float x1,x2,e;
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	printf("Enter value of c: ");
	scanf("%d",&c);
	
	d = pow(b,2); // d = b power 2
	
	f = d - (4*a*c); // Similar to b squared - 4(a * c)
	e = sqrt(f); //Square root of f
	
	x1 = (-(b) + e)/(2*a);
	printf("\nx1 = %.2f",x1);
	
	x2 = (-(b) - e)/(2*a);
	printf("\nx2 = %.2f",x2);
}
