/*write a program to accpet birth date and month of male and female
 and display zodiac compatibilty for marriage
 steps
   1. create variable date and month
   2. accpet female birth date and month from user and store in it
   3. accpet male birth date and month from user and store in it
   4. write zodiac table
   5. use if if else and else statements
   6. check the compatibility test
 */
 #include<stdio.h>
 void main()
 {
    int date,month;
    printf("enter your birth month :");
    scanf("%d",&month);
    printf("enter your birth date :");
    scanf("%d",&date);
    if(month==3 && date>=21 || month==4 && date<=19)
    {
        printf("your zodiac sign is Aris");
    }
    if(month==4 && date>=20 || month==5 && date<=20)
    {
        printf("your zodiac sign is Taurus");
    }
    if(month==5 && date>=21 || month==6 && date<=21)
    {
        printf("your zodiac sign is Gemini");
    }

    if(month==6 && date>=22 || month==7 && date<=22)
    {
        printf("your zodiac sign is Cancer");
    }

    if(month==7 && date>=23 || month==8 && date<=22)
    {
        printf("your zodiac sign is Leo");
    }

    if(month==8 && date>=23 || month==9 && date<=22)
    {
        printf("your zodiac sign is Virgo");
    }

    if(month==9 && date>=23 || month==10 && date<=22)
    {
        printf("your zodiac sign is Libra");
    }


    if(month==10 && date>=24 || month==11 && date<=21)
    {
        printf("your zodiac sign is Scorpio");
    }

    if(month==11 && date>=22 || month==12 && date<=21)
    {
        printf("your zodiac sign is Sagittarius");
    }


    if(month==12 && date>=22 || month==1 && date<=19)
    {
        printf("your zodiac sign is Capricorn");
    }


    if(month==1 && date>=20 || month==2 && date<=18)
    {
        printf("your zodiac sign is Aquarius");
    }

    if(month==2 && date>=19 || month==3 && date<=20)
    {
        printf("your zodiac sign is Virgo");
    }
    if
    (sign is aris == aris)
      {
        printf("they are great match");
      }
 }