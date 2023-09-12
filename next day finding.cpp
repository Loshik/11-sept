#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter the date");
	scanf("%d",&d);
	printf("enter the month");
	scanf("%d",&m);
	printf("enter the year");
	scanf("%d",&y);
	if(d>=1 && d<=30 &&(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
	{
		d++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10))
	{
		d=1;
		m++;
	    printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d>=1 && d<=29 &&(m==4 || m==6 || m==9 || m==11))
	{
		d++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==30 &&(m==4 || m==6 || m==9 || m==11))
	{
		d=1;
		m++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==31 && m==12)
	{
		d=1;
		m=1;
		y++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d>=1 && d<=27 &&(m==2))
	{
		d++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==28 &&(m==2))
	{
		d=1;
		m++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==29 &&(y%4==0 &&(y%100!=0 || y%400==0)) &&(m==2))
	{
		d=1;
		m++;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else if(d==28 &&(y%4==0 &&(y%100!=0 || y%400==0)) &&(m==2))
	{
		d=29;
		printf("the wanted day is %d",d);
		printf("the wanted month is %d",m);
		printf("the wanted year is %d",y);
	}
	else
	{
		printf("the date is invalid");
	}
	return 0;
}

