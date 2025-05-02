/* create a function that convert cellcious to farenhit temperature */
#include<stdio.h>
float getfarenhit(int c)
{
    float ans;
    ans = (c * 1.8) + 32;
    printf("\nfarenhit : %.2f",ans);  
    return ans;  
}

int main()
{
   getfarenhit(23);
}