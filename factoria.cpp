#include<stdio.h>
int main(){
       int a=1,numbr;
       long int fact=1;

       printf("Enter a number: ");
       scanf("%d",&numbr);
      for(a=1;a<=numbr;a++)
      fact=fact*a;
      printf("Factorial of %d is: %ld",numbr,fact);
      return 0;
      }
      
      
      Enter a number: 7
Factorial of 7 is: 5040
--------------------------------
Process exited after 2.259 seconds with return value 0
Press any key to continue . . .


