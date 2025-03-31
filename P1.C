#include<stdio.h>
void main()
{
    float minute, hours;
    printf("enter hours");
    scanf("%f",&hours);
    
    minute = hours*60;
    printf("minute = %.2f",minute);
}