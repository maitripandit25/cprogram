/* concept of logical operator */
#include<stdio.h>
void main()
{
    int a = 10, b = 10, c =20;
    int result;
    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%d",&b);

    printf("enter value for c");
    scanf("%d",&c);

    printf("\na = %d, b = %d, c = %d",a,b,c);

    result = a == b && b == c;
    printf("\n%d = %d == %d && %d == %d",result,a,b,b,c);

}