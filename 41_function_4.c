/* write a program that take 2 argument numbers. */
#include<stdio.h>
void printtable(int start,int end)
{
    while(start<=end)
    {
        int i;
        i=1;
        while(i<=10)
        {
            int ans=start*i;
            printf("%2d x %2d = %d\n",start,i,ans);
            i++;
        }
        printf("\n-------------------\n");
        start++;
    }
}
int main()
{
    printtable(9,10);
}