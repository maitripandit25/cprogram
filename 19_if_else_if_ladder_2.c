/* write a program to calculate tax amount, gross income and net
income from given monthely income as per new income tax rule.
gross incom            tax rate (%)
0 - 4,00,000              NIL
4,00,001 - 8,00,000        5
8,00,001 - 12,00,000       10
12,00,001 - 16,00,000      15
16,00,001 - 20,00,001      20
20,00,001 - 24,00,001      25
above 24,00,000            30
steps
   1. create variables
   2. accpet monthely income from user
   3. calculate gross yearly income
       gross_income = monthely_income * 12
   4. calculate tax amount as per given tax rate
   5. calculate net income
      net_income = gross_income - tax
   6. display gross income , tax , net income   
*/
#include<stdio.h>
void main()
{
    int monthly_income,gross_income;
    float tax_amount,net_income;

    printf("enter monthly income");
    scanf("%d",&monthly_income);
    gross income = monthly_income * 12;
    if(gross_income<=400000)
    {
        tax_amount = 0;
    }
    else if(gross_income<=800000)
    {
        tax_amount = (gross_income * 5)/100  ;
    }
    else if(gross_income<=1200000)
    {
       tax_amount = (gross_income * 10)/100 ;
    }
    else if(gross_income<=1600000)
    {
        tax_amount = (gross_income * 15)/100 ;
    }
    else if(gross_income<=2000000)
    {
        tax_amount = (gross_income * 20)/100 ;
    }
    else if(gross_income<=2400000)
    {
        tax_amount = (gross_income * 25)/100 ;
    }
    else
    {
        tax_amount = (gross_income * 30)/100 ;
    }
     net_income = gross_income - tax_amount;
     printf("\n Gross income %d \n Tax amount = %f \n Net income =%f"
        ,gross_income,tax_amount,net_income);
}