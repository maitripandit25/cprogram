#include<stdio.h>
void main()
{
    int count;
    for(count = 1;count<=100;count++)
    {
        if(count % 2 == 1)
        {
            printf("%8d",count);
        }
        else
        {
            count = 0 - count;
            printf("%8d",count);
            count = 0 - count;
        }
    }
}