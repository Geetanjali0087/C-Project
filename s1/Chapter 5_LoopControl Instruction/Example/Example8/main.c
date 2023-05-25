#include <stdio.h>

int main()
{

    int num,i,fact;
    printf("Enter a number:");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num){

        fact=fact*i;
        i++;
    }
    printf("Fcatorial value of %d is=%d\n",num,fact);



    return 0;
}
