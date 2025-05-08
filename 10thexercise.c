/* write a program to print following pattern
 1 4 9 16 25 ...........100
  stpes
    1. create variable num,square
    2. store 1 into num
    3. calculate square and store in it
       square = num*num
    4. display square
    5. increment num by 1
    6. repeat step 3 to 5 till square <= 100    
*/
#include<stdio.h>
void main()
{
    int num = 1,square = 1;
    num = 1;
    while(square < 100)
    {
        square = num * num;
        printf("%10d",square);
        num = num + 1;
    }
    
}