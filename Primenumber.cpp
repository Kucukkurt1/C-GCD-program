#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n; // Variable of given by host
   int status = 1; // Status is checking your variables prime or not
   int num = 3; // Num checks if its variables have a square root
   int count; // This variable work for counting up to given variable
   int i; // Variable of loop
   

   printf("How many prime numbers do you want ? = ");
   scanf("%d",&n);
   if (n==0||n==1){ //if user enter 1 or 2 value this error will be displayed
   printf("Error!!! \nPrime numbers start from 2 , please change your value !!!");	
   }
   if (n >= 2) // Prime numbers start from 2

   {
   	printf("First %d prime numbers=\n",n);
    printf("%d\n", 2);
   }

   for (count = 2; count <=n; ) //its prime number counter. Sqrt is checks if it have a square roots
   {
   for (i = 2; i <= (int)sqrt(num); i++)
   {
   if (num%i == 0)
   {
    status = 0; // status = 0 Number isn't prime , status = 1 Number is prime
    break;
	       }
      }
      if (status != 0) 
      {
        printf("%d\n", num);
         count++;
      }
      status = 1;
      num++;
   }        
   
   return 0;
}


