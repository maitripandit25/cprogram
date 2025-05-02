/*write a function that take num and print even or odd*/
#include<stdio.h>
void check(int num)
  {
    if(num%2==0)
    {
        printf("\neven");
    }
    else
    {
        printf("\nodd");
    }
  }
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    check(3);
   
}