#include<stdio.h>
#include<conio.h>
#include<math.h>
float length(int,int,int,int);
int main()
{
int x1,x2,x3,y1,y2,y3,a2,b2,c2;
float a,b,c;
clrscr();
printf("enter x1 coordinate");
scanf("%d",&x1);
scanf("%d",&y1);
printf("enter the x2 coordinate");
scanf("%d",&x2);
scanf("%d",&y2);
printf("enter the x3 coordinate");
scanf("%d",&x3);
scanf("%d",&y3 );
a= length(x1,y1,x2,y2);
b= length(x2,y2,x3,y3);
c= length(x3,y3,x1,y1);
//printf("%f\t%f\t%f",a,b,c);
if(a>b&&a>c)
{
    if(a>(b+c))
	{
	printf("cannot form a triangle");
	return 0;
	}
}
else if(b>c&&b>a)
{
if(b>(a+c))
	{
	printf("cannot form a triangle");
	return 0;
	}
}
else
{
if(c>(a+b))
{
printf("cannot form a triangle") ;
	return 0;
}
}
a2= ceil(a*a);
b2=ceil(b*b);
c2=ceil(c*c);
//printf("\n%d\t%d\t%d\t",a2,b2,c2);
if((a==b)&&(b==c))
printf("equilateral triangle");
else if(a2==((b*b)+(c*c)))
printf("rt angle triangle");
else if(b2==((a*a)+(c*c)))
printf("rt angle triangle");
else if(c2==((b*b)+(a*a)))
printf("rt angle triangle");
else if((a==b)|(b==c)|(a==c))
printf("isoscles triangle");
else
printf("scalen triangle");
getch();
return 0;
}
float length(int x1,int y1,int x2,int y2)
{
float d;
d= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
//printf("%f\t",d);
return d;
}