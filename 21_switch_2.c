/* write a program to findout given character is vowel or not*/
#include<stdio.h>
void main()
{
    char letter;
    printf("enter letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'A':; 
        case 'a':; 
        printf("it is vowel");
        break;
        case 'E':; 
        case 'e':; 
        printf("it is vowel");
        break;
        case 'I':; 
        case 'i':; 
        printf("it is vowel");
        break;
        case 'O':; 
        case 'o':; 
        printf("it is vowel");
        break;
        case 'U':; 
        case 'u':; 
        printf("it is vowel");
        break;
        default:
        printf("it is not vowel");
        break;
    }
}