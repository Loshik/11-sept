#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a)
	printf("equilateral");
	if(a!=b && b!=c && c!=a)
	printf("scalene");
	if(a==b || b==c ||c==a)
	printf("isosceles");
	return 0;
}
