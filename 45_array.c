//string input
#include<stdio.h>
void main()
{
    char name[50];

    printf("Enter your name : ");
    for(int i=0 ; i<50 ; i++)
    {
        scanf("%c",&name[i]);
        if(name[i]=='\n')
        {
            break;
        }
    }

    for(int i=0 ; i<50 ; i++)
    {
        printf("%c",name[i]);

        if(name[i]=='\n')
        {
            break;
        }
    }
    printf("\n");

    int n;

    for(int i=n ; i>0 ; i--)
    {
        printf("%c",name[i]);
        
        if(name[i]=='\n')
        {
            break;
        }
    }
}