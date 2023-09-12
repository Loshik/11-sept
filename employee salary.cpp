#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	printf("enter the tier number");
	scanf("%f",&b);
	if(b==1)
	{
		c=a*1.76;
		printf("the total salary is %f",c);
	}
	if(b==2)
	{
		c=a*1.72;
		printf("the total salary is %f",c);
	}
	if(b==3)
	{
		c=a*1.68;
		printf("the total salary is %f",c);
	}
    return 0;
}
