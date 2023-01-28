#include <stdio.h>
int main () {
int a ;
int b ;
int i;
int gcd;
home:
printf("Please enter two integer:\n");
scanf("%d %d",&a,&b);
if(a<0||b<0){
printf("negative numbers do not have a GCD\n");
goto home;	
}
if(a==0||b==0)
{	
printf("You cannot GCD for 0,please change your integer:\n");
goto home;
}
for(i=1;i<=a && i<=b;++i)

     {
	   
if(a%i== 0&& b%i==0) {
	gcd=i;
}		
}
printf("GCD:%d",gcd);
}

