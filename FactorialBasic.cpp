#include <stdio.h>
int main()
{                           /* This code works up to 12 , because of int max value (2,147,483,647). If you want to more developed code , go to my page and open
                               Factorialupdated.cpp file*/
int n, i;                     
int fact = 1;

printf("Enter a integer ");
scanf("%d",&n);

       if (n < 0)
       printf("Error! Negative numbers has not factorial.");

        else
        {
        for(i=1; i<=n; ++i)
        {
            fact=fact*i;
        }
        printf("factorial of %d is = %d", n, fact);
    }

    return 0;}
