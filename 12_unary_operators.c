#include<stdio.h>
void main()
{
    int a =10, b;
    
    b = ++a;
    printf("b = %d a= %d",b,a);

    b = a--;
    printf("\nb = %d a = %d",b,a);

    b = a++;
    printf("\nb = %d a = %d",b,a);

    b = --a; 
    printf("\nb = %d a = %d",b,a);
}
