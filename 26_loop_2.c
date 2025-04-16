/* write a program to display following pattern.
  100 90 80 70 60..........0
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
        count = count - 10;
    }
   
}