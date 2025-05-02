#include<stdio.h>
void main()
{
    int marks[3][5];
    for(int i=0 ; i<=2 ; i++)
    {
     for(int j=0 ; j<=4 ; j++)
     {
        printf("enter marks");
        scanf("%d",&marks[i][j]);

        if(marks[i][j]<=0 || marks[i][j]>100)
        {
            printf("Invalid output\n");
        }
        
     }
    }

    for(int i=0 ; i<=2 ; i++)
    {

     for(int j=0 ; j<=4 ; j++)
     {
        printf("\n%d",marks[i][j]);
     }

    }
    
}


//marks[0][0] = 10;
//marks[1][1] = 20;
//printf("%d",marks[0][0]);
//printf("\n%d",marks[1][1]);
