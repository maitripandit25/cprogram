/* findout profit and loss from given sales_price and cost_price
steps
1. create variable sales_price and cost_price
2. accept variable from user
3. accpet sales_price and store it in that variable
4. accpet cost_price and store it in that variable
5. find difference
  difference = sales_price - cost_price
6. calculate profit or loss
    if difference is above 0
       then  display as profit
    otherwise
      display as loss             
*/
#include<stdio.h>
void main()
{
    int sales_price,cost_price,difference;
    printf("enter cost price of product");
    scanf("%d",&cost_price);
    printf("enter sales_price of product");
    scanf("%d",&sales_price);
       difference = sales_price - cost_price;
    
       if(difference>0)
       {
        printf("profit = %d",difference);
       }
       else
       {
        printf("loss = %d",difference);
       }
}