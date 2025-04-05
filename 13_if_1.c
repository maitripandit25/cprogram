
/* 
write a program to findout qube of given positive number.
steps 
   1. create variable number,qube
   2. accpet variable number from user
   3. check if number is negative
      turn out negative number into positive number
   4. calculate qube
   5. display qube
*/
#include<stdio.h>
void main()
{
   int number,qube;
   printf("enter number");
  scanf("%d",&number);
   if(number<0)
   {
      number = 0 - number;
      printf("\n number was negative, converted into positive");
   }
      qube = number*number*number;
    printf("\nqube = %d", qube);
}