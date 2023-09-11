#include<stdio.h>
int main()
{
	int p,ch,b,ma,c,k;
	scanf("%d %d %d %d %d",&p,&ch,&b,&ma,&c);
	printf("enter the marks");
	k=(p+ch+b+ma+c)/5;
	if(k>=90 && k<=100)
	printf("the grade is A");
	else if(k>=80 && k<90)
	printf("the grade is B");
	else if(k>=70 && k<80)
	printf("the grade is C");
	else if(k>=60 && k<70)
	printf("the grade is D");
	else if(k>=40 && k<60)
	printf("the grade is E");
	else if(k<40)
	printf("the grade is F");
	return 0;
}
