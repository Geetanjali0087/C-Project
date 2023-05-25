#include <stdio.h>

#include <stdlib.h>
#include <math.h>

int main() {
    int yr;
    printf("Enter a yr:");
    scanf("%d",&yr);
    if(yr%400==0||yr%100==0&&yr%4==0)
        printf("Leap year\n");
    else
        printf("Not Leap year\n");

    //printf("\n Salary Of employee=%d\n",sal);
    return 0;
}
