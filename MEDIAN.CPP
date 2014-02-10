#include<iostream.h>
#include<conio.h>
class median
{
public:
int *a,*b,*c,alen,blen,clen;
median(int,int,int);
void merge(int *a ,int *b);
};
median :: median(int asize,int bsize,int csize)
{
a = new int[asize];
b = new int[bsize];
c = new int[csize];
cout<<"enter alen";
cin>>alen;
cout<<"enter blen";
cin>>blen;
cout<<"enter a ele";
for(int k=0;k<alen;k++)
cin>>a[k];
cout<<"enter b ele" ;
for(int l=0;l<blen;l++)
cin>>b[l];
}
void median :: merge(int *a,int *b)
{
int i=0,j=0,clen=0;
while(i<alen&&j<blen)
{
if(a[i]<b[j])
{
c[clen]=a[i];
clen++;
i++;
}
else if(a[i]>b[j])
{
c[clen]=b[j];
clen++;
j++;
}
else
{
c[clen]=a[i];
clen++;
i++;
j++;
}
}
while(i<alen)
{
c[clen]=a[i];
clen++;
i++;
}
while(j<blen)
{
c[clen]=b[j];
clen++;
j++;
}
cout<<"median=";
if((clen%2)==0)
cout<<c[(clen-2)/2]<<","<<c[clen/2];
else
cout<<c[clen/2];
}
void main()
{
clrscr();
median x(10,20,30);
x.merge(x.a,x.b);

getch();
}
