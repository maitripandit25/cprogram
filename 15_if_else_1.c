/* write a program to display 24 hours format and display it in
12 hours format
input = 16 hours output = 4 PM
steps
  1.create variable hours
  2.accpet variable from user in hours variable
  3.check if hours is above 11 then substract 12 from hours
    and display hours with PM word
  4.otherwise
     display hours with AM word   
*/
#include<stdio.h>
void main()
{
    int hours;
    printf("enter hours");
    scanf("%d",&hours);
    if(hours>11)
    {
        hours = hours - 12;
        printf("%d PM",hours);
    } 
    else
    {
        printf("%d AM",hours);
    }
}