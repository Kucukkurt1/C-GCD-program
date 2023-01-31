#include <iostream>
using namespace std;

int main (){

int operation;
	
float num1,num2,result; //There are our variables. We will take num1 and num 2 by host. Operation will our function and result as seen as give our result of function//

printf("Enter an integer:\n");     //We used float variable becasue We want to get the most accurate result in the division operation//

scanf("%f",&num1);

printf("Enter an integer:\n");

scanf("%f",&num2);

printf("Select operation= \n1)Plus\n2)Minus\n3)Multipily\n4)Divide\n");     /*These is our main menu. Host will Choose the operation*/

home:
	
scanf("%d",&operation);

switch(operation){

           case 1 : 
           result=num1+num2;
           printf("%.1f+%.1f=%.1f",num1,num2,result);      /* If you dont use break, this program doesn't work. Because loop wont stop when it's arrive the unused break line.*/
           break;

           case 2 : 
		   result=num1-num2;
		   printf("%.1f-%.1f=%.1f",num1,num2,result);    /* %.1f means show only the first digit after the comma. For example 2.5 if we use %.2f =>2.50*/
		   break;

           case 3 : 
		   result=num1*num2;
		   printf("%.1fx%.1f=%.1f",num1,num2,result);
           break;

           case 4 :	
           result=num1/num2;
           printf("%.1f/%.1f=%.2f",num1,num2,result);
	       break;

           default	: /* If host choose other selections, program goes to main menu (home).*/
		   if(operation>4||operation==0){
		   	printf("Please select the operation!= \n1)Plus\n2)Minus\n3)Multipily\n4)Divide\n ");
		   	goto home;
		   }  
            break;

	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
