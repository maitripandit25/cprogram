/* write a program to findout whether given year is millennium years
or not */
#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);

    if(year % 1000 == 0)
    {
        printf("year is a millennium year");
    }
    else
    {
        printf("year is not a millennium year");
    }
}