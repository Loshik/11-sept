#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("a is large");
	else if(b>c)
	printf("b is large");
	else
	printf("c is large");
	return 0;
}
