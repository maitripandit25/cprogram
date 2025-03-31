#include<stdio.h>
void main()
{
    float farenhit,ceilcius;
    printf("enter farenhit");
    scanf("%f",&farenhit);

    ceilcius = (farenhit-32)*1.8;
    printf("ceilcius = %.2f",ceilcius);

}