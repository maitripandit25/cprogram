#include<stdio.h>
void main()
{
  int a,b;
  printf("enter value for a");
  scanf("%d",&a);
  printf("enter value for b");
  scanf("%d",&b);
   
  printf("a=%d b=%d",a,b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("a = %d b = %d",a,b);
}