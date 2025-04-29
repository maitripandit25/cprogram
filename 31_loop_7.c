/*







*/
#include<stdio.h>
void main()
{
    int base,power,exponent;
    printf("enter base");
    scanf("%d",&base);
    
    printf("enter power");
    scanf("%d",&power);

    exponent = base;
    do
    {
        exponent = base * exponent;
        power--;
        
    }while(power>=1);
    printf("%d",exponent);

   
}