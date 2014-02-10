#include<stdio.h>
#include<conio.h>
void main()
{

int i,j,k,z,*a,abs[100],n,s,max,m,l,index;
clrscr();
printf("enter the size of array");
scanf("%d",&s);
a =(int *)malloc(s*sizeof(int));
printf("enter the length of array");
scanf("%d",&n);
printf("enter the numbers");
for(z=0;z<=100;z++)
abs[z]=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(k=0;k<=100;k++)
{
if(a[j]==k)
abs[k]++;
}
}
printf("the repeated element is");
for(m=0;m<=100;m++)
{
max=abs[0];
for(l=0;l<=100;l++)
{
if(abs[l]>max)
{
max=abs[l];
index=l;
}
}
}
printf("%d",index);
getch();
}



