/* write a program to print following pattern 
1
1 2
1 2 3
1 2 3 4
*/
#include<stdio.h>
void main()
{
    int i;
    int j;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf("%2d",i);
        }
        printf("\n");
    }
   

    /*for(i=1;i<=2;i++)
    {
        printf("%d",i);
    }
    printf("\n");

    for(i=1;i<=3;i++)
    {
        printf("%d",i);
    }
    printf("\n");

    for(i=1;i<=4;i++)
    {
        printf("%d",i);
    }*/
   /* printf("\n");
    /*printf("1");

    printf("\n1");
    printf("2");

    printf("\n1");
    printf("2");
    printf("3");

    printf("\n1");
    printf("2");
    printf("3");
    printf("4");*/
}