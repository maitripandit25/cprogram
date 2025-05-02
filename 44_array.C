#include<stdio.h>
int main()
{
    int choice;

    int count=1;

    printf("enter student no : ");
    scanf("%d",&choice);
    int marks[choice];

    for(int i=0;i<choice;i++)
    {
      printf("enter student %d mark : ",count);
      scanf("\n%d",&marks[i]);
      count++;
    }
    
    for(int i=0 ; i<choice ; i++)
    {
        printf("%d",marks[i]);
    }
    return 0;
}




    //marks[1] = 10;
    //marks[2] = 50;
    //marks[3] = 70;
    //marks[4] = 90;

    //printf("\n%d",marks[0]);
    //printf("\n%d",marks[1]);
    //printf("\n%d",marks[2]);
    //printf("\n%d",marks[3]);
    //printf("\n%d",marks[4])