/* write a program to print following pattern
  1 8 27 64 125 ...........10000
  steps
     1. create variable num and qube
     2. store 1 into num
     3. calculate qube and store in it
        qube = num*num*num
     4. display qube
     5. increment num by 1
     6. repeat step 3 to 5 till qube <= 10000 
*/
#include<stdio.h>
void main()
{
   int num = 1,qube = 1;
   num = 1;
   while(qube < 9261)
   {
    qube = num * num * num;
    printf("%10d",qube);
    num++;
   }
}