#include <stdio.h>

float power(int x, float y);
int main()
{
    float x,pow;
    int y;

    printf("Enter a number");
    scanf("%d%f",&y,&x);
    pow=power(x,y);
    printf("%f to the power %d=%f\n",x,y,pow);
    return 0;
}

float power(int y,float x){
    float p=1;
    for(int i=1;i<=y;i++)
        p=p*x;
    return (p);
}
