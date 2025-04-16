/* write a program to display following pattern.
  99 88 77 66 55..........0
  1. create variable count store 99 in it.
  2. display count.
  3. decrement count by 10
  4. repeat 2 and 3 till count is grater than 0
*/
#include<stdio.h>
void main()
{
    int count = 99;
    while(count>=0)
    {
        printf("%10d",count);
        count = count - 11;
    }
   
}