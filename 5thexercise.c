/* write a program to calculate bmi and display obesity level of person from 
given height(foot and inch) and weight(kg).
steps
  1.create variable weight and height
  2.accpet weight from user and store in weight variable
  3.accpet height from user and store in height variable
  4.calculate bmi by given formula
    BMI = weight/[height_meters * height_meters]
  5.display obesity level by chart 
*/
#include<stdio.h>
void main()
{
  float weight,m,bmi,inch,feet,tot_height,height;
  printf("enter weight");
  scanf("%f",&weight);
  printf("enter feet");
  scanf("%f",&feet);
  printf("enter inch");
  scanf("%f",&inch);
  tot_height = (feet*12)+inch;
  height = tot_height* 0.0254;
  bmi = weight/(height*height);
  printf(" %.2f",bmi);

  if(bmi < 18.5)
    {
      printf("you are under weight");
    }
  else if(bmi >= 18.5 && bmi <= 24.9) 
    {
      printf("you are healthy weight");
    }  
   else if(bmi >= 25 && bmi <= 29.9) 
    {
      printf("you are over weight");
    } 
  else
    {
      printf("you are obese");
    }  
}