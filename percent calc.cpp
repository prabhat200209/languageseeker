#include <stdio.h>
int main ()
{
	float per,p,c,b,m,co,to;
	int t;
	printf("Enter the marks obtained in physics\n");
	scanf("%f",&p);
	printf("Enter the marks obtained in chemistry\n");
	scanf("%f",&c);
	printf("Enter the marks obtained in biology\n");
	scanf("%f",&b);
	printf("Enter the marks obtained in mathematics\n");
	scanf("%f",&m);
	printf("Enter the marks obtained in computer\n");
	scanf("%f",&co);
	to=p+c+b+m+co;
	printf("Enter the total marks\n");
	scanf("%d",&t);
	if(p>100)
	printf("Invalid input as p is greater than 100");
	else if(c>100)
	printf("Invalid input as c is greater than 100");
	else if(m>100)
	printf("Invalid input as m is greater than 100");
	else if(b>100)
	printf("Invalid input as b is greater than 100");
	else if(co>100)
	printf("Invalid input as co is greater than 100");
	else
	{
	per=(to)/t*100;
	if(per>=90)
	printf("grade=A");
	if(per>=80&&per<90)
	printf("grade=B");
	if(per>=70&&per<80)
	printf("grade=C");
	if(per>=60&&per<70)
	printf("grade=D");
	if(per>=40&&per<60)
	printf("grade=E");
	else
	{
		if(per<40)
		printf("grade=F");
	}
	}

	return 0;
}
