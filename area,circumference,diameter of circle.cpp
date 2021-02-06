#include <stdio.h>
int main ()
{
	float c,a,p=3.14,r,d;
	printf("The the radius of the circle\n");
	scanf("%f",&r);
	d=2*r;
	printf("The diameter of the circle is %f\n",d);
	c=2*p*r;
	printf("The circumference of the circle is %f\n",c);
	a=p*r*r;
	printf("The area of the circle is %f\n",a);
	return 0;
}
