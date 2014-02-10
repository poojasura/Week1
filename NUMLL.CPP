#include<iostream.h>
#include<conio.h>
class ll;
class node
{
friend class ll;
private:
int data;
node *link;
};
class ll
{
node *top;
public:
ll()
{
top=NULL;
}
void insert(int num);
 void display();
};
void ll::insert(int num)
{
int n;
 n=num;
 while(num>0)
 {
 n=num%10;
 node *t = new node;
 t->data = n;
 t->link = top;
 top = t;
 num=num/10;

 }
 }
 void ll:: display()
 {
 node *current = new node;
 for(current =top;current!=NULL;current= current->link)
 cout<<current->data<<"->";
 }
 void main()
 {
 clrscr();
 ll i;

 i.insert(3749);
 i.display();
 getch();
 }
