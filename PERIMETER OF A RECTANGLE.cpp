#include<stdio.h>
int main ()
{
	int i,j,k;
	printf("ENTER THE VALUE OF i AS LENGTH ");
	scanf("%d", &i);
	printf("ENTER THE VALUE OF j AS BREADTH ");
	scanf("%d", &j);
	k=2*(i+j);
	printf("THE PERIMETER OF THE RECTANGLE IS %d",k);
	return 0;
}
