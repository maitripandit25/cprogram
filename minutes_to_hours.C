/*
 write a program to convert given minutes into hours and remaining minutes.
 input
    1) minutes : 210 output hours : 3 minutes : 30
    2) minutes : 75 output hours : 1 minutes : 15
    steps
    1) create variable,minutes
    2) accept minutes from user and store in minutes variable
    3) calculate hours
       hours = minutes/60
    4) calculate remaining minutes
       minutes = minutes - (hours*60)
    5) dispaly hours and minutes
*/ 
#include<stdio.h>
void main()
{
    int hours,minutes;
    printf("enter total minutes");
    scanf("%d",&minutes);
    hours = minutes/60;
    minutes = minutes - hours*60;
    printf("hours = %d remaining minutes = %d",hours,minutes);

}
