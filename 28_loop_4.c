/*
   write a program to findout factorial of given number
   steps
     1. create variable num & factorial
     2. accpet input in number variable
     3. store 1 into factorial
     4. multiply factorial with number
       factorial = factorial * num
     5. decrease number by 1
     6. repeat step 5 & 6 till num is above 1
     7. display factorial   
*/
#include<stdio.h>
void main()
{
    int num,factorial;
    printf("enter number");
    scanf("%8d",&num);

    factorial = 1;
    factorial = factorial * num;
    while(num>1)
    {
        num = num - 1;
        factorial = factorial * num;
        printf("%8d",factorial);
    }
    
}