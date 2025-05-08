/* write a program to print following pattern
 0 1 1 2 3 5 8 13 21 ...........100
  stpes
    1. create variable num,square
    2. store 1 into num
    3. increment number by 1
       num = num + 1
    4. display num
    5. increment num by 1
    6. repeat step 3 to 5 till square <= 100    
*/
#include<stdio.h>
void main()
{
    int num1 = 0,num2 = 1;
    while(num1 < 100)
    {
        int nextnum = num1 + num2;
        printf("%10d",num1);
        num1 = num2;
        num2 = nextnum;
    }
    
}