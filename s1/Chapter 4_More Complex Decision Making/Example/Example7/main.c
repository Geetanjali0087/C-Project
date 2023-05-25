#include <stdio.h>

include <stdlib.h>
#include <math.h>

    int main() {
    int side1,side2,side3,largeside,sum;
    printf("Enter aTraingle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1>side3)
    {
        if(side1>side3){
            sum=side2+side3;
            largeside=side1;
        }
        else{
            sum=side1+side2;
            largeside=side3;
        }
    }
    else{
        if(side2>side3){
            sum=side1+side3;
            largeside=side2;

        }
        else{
            sum=side1+side2;
            largeside=side3;
        }
    }
    if(sum>largeside)
        printf("The taringle is a valid traingle\n");
    else
        printf("The taringle is a Invalid traingle\n");

    return 0;
}
