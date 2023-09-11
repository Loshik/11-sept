#include<stdio.h>
int main()
{
	int unit,bill;
	printf("enter the unit");
	scanf("%d",&unit);
	if(unit>=0 && unit<=100)
	printf("%d",bill=unit*2);
	else if(unit>=101 && unit<=250)
	printf("%d",bill=unit*5);
	else if(unit>250)
	printf("%d",bill=unit*8);
	return 0;
}
