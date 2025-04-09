/*write a program to accpet month number from user and display name
of the month
steps
  1. create variable month
  2. accpet input from user in variable month
  3. check variable's valus and display month name accordingly
*/
#include<stdio.h>
void main()
{
    int month;
    printf("enter month number (1 to 12)");
    scanf("%d",&month);
    if(month==1)
    {
        printf("it is january");
    }
    else if(month==2)
    {
        printf("it is february");
    }
    else if(month==3)
    {
        printf("it is march");
    }
    else if(month==4)
    {
        printf("it is april");
    }
    else if(month==5)
    {
        printf("it is may");
    }
    else if(month==6)
    {
        printf("it is june");
    }
    else if(month==7)
    {
        printf("it is july");
    }
    else if(month==8)
    {
        printf("it is august");
    }
    else if(month==9)
    {
        printf("it is september");
    }
    else if(month==10)
    {
        printf("it is october");
    }
    else if(month==11)
    {
        printf("it is november");
    }
    else if(month==12)
    {
        printf("it is december");
    }
    else
    {
        printf("it is not valid input");
    }



}