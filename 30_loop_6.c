/*
   write a program to generate multiplication table of given number
   input 10
   output
   10 * 1 = 10
   10 * 2 = 20
   steps
     1. create variable number,multiplier,result
     2. take input from user
     3. store 1 into multiplier
     4. multiply number with it and store into result
     5. result = number * multiplier
     6. increment multiplier
     7. repeat steps
*/
#include<stdio.h>
void main()
{
    int number,multiplier,result;
    printf("enter number");
    scanf("%d",&number);
    for(multiplier = 1;multiplier<=10;multiplier++)
    {
        result = number * multiplier;
        printf("%2d * %2d = %3d\n",number,multiplier,result);
    }
    
}