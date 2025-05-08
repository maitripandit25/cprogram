/*
   write a program to findout whther given number is prime number or not
   steps
     1. create variable number
     2. store 1 into number variable
     3. check if the number is >= 1 and divided by that own number or 1
     4. display prime number
*/
#include<stdio.h>
void main()
{
    int num,i;
    printf("enter number");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
      if(num%i==0)
      {
        printf("\nIt is not prime number ");
        break;
      }
    }
    if(i==num)
    {
      printf("\nIt is a prime number");
    }
} 
   