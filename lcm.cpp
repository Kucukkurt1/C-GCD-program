#include <stdio.h>
int main()
{
int x,y,lcm=0;

printf("Enter the value of x: ");

scanf("%d",&x);

printf("Enter the value of y: ");

scanf("%d",&y);

for(int i=1;i<=x*y;i++)
{
if(i%x==0&&i%y==0)
{

lcm=i;
break;
}
}
printf("Lcm: %d",lcm);
}
