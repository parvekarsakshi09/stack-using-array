#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int ch,a[MAX],top=-1,i;
void push();
void pop();
void display();
void exit();
int main()
{

printf("1.push");
printf("2.pop");
printf("3.display");
printf("4.display");

while(1)
  {
    printf("enter the choice");
scanf("%d",&ch);
switch(ch){
    case 1:
    {
    push();
    break;
    }
case 2:
    {
pop();
break;
    }
case 3:
    {
display();
break;
     }
case 4:
     {
    exit(0);
    break;
     }
default:
printf("wrongg");
}
}
}
void push()
{
if(top==MAX-1)
    {
    printf("stack overflow");
    }
else
    {
    int data;
    printf("enter data");
    scanf("%d",&data);
    top++;
    a[top]=data;

 }
}
void pop(){
if(top==-1){
    printf("stack is empty");
}
else
{
printf("popped=%d",a[top]);
top--;
}

}
void display()
{
if(top>=0)
  {
    printf("elements");
    for(int i=top;i>=0;i--)

printf("%d",a[i]);

    }
    else
    {

        printf("stack is empty");
    }
}




