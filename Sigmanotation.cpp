#include <stdio.h>

int main() {

int number=0 ;
int total=0 ;
int i =0 ;

printf("Enter a value to sum the numbers up to your integer: \n");
scanf("%d",&number);

for(i=0 ; i<=number ; i++){
	
	
	total=total+i;
}

printf("The sum of the numbers up to the number which are you typed = %d",total);
}




