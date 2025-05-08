#include<stdio.h>
float calc(float num1,float num2,int choice)
 {
    if(choice == 1)
    {
        return num1+num2;  
    }
    else if(choice == 2)
    {
        return num1-num2;
    }
    else if(choice == 3)
    {
        return num1*num2;
    }
    else if(choice == 4)
    {
      if(num2!=0)
      {
        return num1 / num2;
      }
      else
      {
        printf("Error : division by zero\n");
        return 0;
      }
    }
   else
   {
        printf("invalid choice");
        return 0;
   }  

    
 }

int main()
{
  float num1,num2,result;
  int choice;

  printf("enter two numbers : ");
  scanf("%f %f",&num1,&num2);

  printf("choose choice : \n1 -> Add\n2 -> substract\n3 -> multiply\n4 -> divide\n");
  scanf("%d",&choice);
 
  result = calc(num1,num2,choice );
  printf("Result : %.2f\n",result);
  return 0;
    

}