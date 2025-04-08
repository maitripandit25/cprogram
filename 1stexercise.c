/* write a program to findout elder brother from two brother age*/
#include<stdio.h>
void main()
{
    int age1 , age2;
    printf("enter 1st brother age");
    scanf("%d",&age1);
    printf("enter 2nd brother age");
    scanf("%d",&age2);
    if(age1 >= age2)
      {
        printf("first brother is elder");
      }
    else
      {
        printf("second brother is elder");
      }  
}