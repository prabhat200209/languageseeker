#include <stdio.h>
int main ()
{
	float c,f;
	printf("Enter the temprature in celcius\n");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("The temprature in Fahrenheit is %f",f);
	return 0;
}
