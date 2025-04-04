//write a program to reverse two digit given amount
/*
   steps
   1. create variable amount & last_digit,first-digit and accpet amount from user
   2. get last_digit of amount and store it in last-digit variable
      amount * %10
   3. get first_digit of amount
       amount/10
   4. combine last_digit nd first_digit
     amount =  (last_digit * 10) +1       
*/
#include<stdio.h>
void main()
{
    int amount,first_digit,last_digit;
    printf("enter amount");
    scanf("%d",&amount);

    last_digit = amount % 10;
    first_digit = amount/10;

    amount =  (last_digit * 10) + first_digit;
    printf("reverse amount = %d",amount);
}