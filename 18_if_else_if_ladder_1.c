/* write a program to display name of the day from given day of week
as number
steps
  1. create variable day
  2. accpet input from user in variable day
  3. check value and display name accordingly
*/
#include<stdio.h>
void main()
{
    int day;
    printf("enter day of week (1 to 7) : ");
    scanf("%d",&day);
    if(day==1)
     {
        printf("It is monday");
     }
    else if(day==2)
     {
        printf("It is tuseday");
     }
     else if(day==3)
     {
        printf("It is wednesday");
     }
     else if(day==4)
     {
        printf("It is thursday");
     }
     else if(day==5)
     {
        printf("It is friday");
     }

     else if(day==6)
     {
        printf("It is saturday");
     }
     else if(day==7)
     {
        printf("It is sunday");
     }
     else
     {
        printf("It is not valid input");
     }
}