#include<stdio.h>
int main()
{
	int a,b,c;
	printf("the value of a");
	scanf("%d",&a);
	printf("the value of b");
	scanf("%d",&b);
	printf("the value of c");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("the maximum value is %d",a);
	}
	else if(b>c)
	{
		printf("the maximum value is %d",b);
	}
	else
	{
		printf("the maximum value is %d",c);
	}
	return 0;
}
