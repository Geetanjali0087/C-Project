#include <stdio.h>

int main()
{
    int yr;
    printf("Enter a year\n");
    scanf("%d",&yr);
   leap(yr);

    return 0;
}

int  leap(int yr){

    if(yr%400==0 ||yr%100!=0 && yr%4==0)
        printf("Leap year\n");
    else
        printf("Not leap year");
}


