#include <stdio.h>

int main()
{
    float x,power;
    int i,y;
    printf("\nEnter a number:");
    scanf("%f%d",&x,&y);
    power=i=1;

    while(i<=y){

        power=power*x;
        i++;
    }
    printf("%f to the power%d is %f\n",x,y,power);



    return 0;
}
