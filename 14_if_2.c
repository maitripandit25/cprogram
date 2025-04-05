/*
   write a program to findout given number is even or odd
steps
    1. create variable number reminder.
    2. accpet input in number variable.
    3. get reminder by dividing number with 2.
       reminder = number%2
    4. if reminder is 1 then display message number is odd.
    5. if reminder number is 0 then display message is even.
 */
 #include<stdio.h>
 void main()
 {
    int number,reminder;
    printf("enter number");
    scanf("%d",&number);
    reminder = number%2
    printf("%d",reminder);
    if(reminder==1)
    {
        printf("\n number is odd");
    }
    if(reminder==0)
    {
        printf("\n number is even");
    }
 }