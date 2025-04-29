/*
a
ab
abc
abcd
*/
#include<stdio.h>
void main()
{
    char symbol;
    printf("enter a character : ");
    scanf("%c",&symbol);

    int n;
    n=symbol;
    n = n-97;
    int asci = 97;
    for(int j=0; j<=n; j++)
    {
        for(int i=97; i<=97+j; i++)
        {
            printf("%c",i);
        }
        printf("\n");
        
    }
   

    /*printf("\na");
    printf("b");

    printf("\na");
    printf("b");
    printf("c");

    printf("\na");
    printf("b");
    printf("c");
    printf("d");*/

}