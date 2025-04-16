/* write a program to display following pattern.
  2 4 6 8 10 12 14 ......100
  1. create variable count store 2 in it.
  2. display count.
  3. increment count by 2
  4. repeat 2 and 3 till count is less then 100
*/
#include<stdio.h>
void main()
{
    int count = 2;
    while(count<=100)
    {
        printf("%10d",count);
        count = count + 2;
    }
    
}