#include <stdio.h>

int main()
{
    int qty,dis;
    float rate,tol;
    printf("Enter a quality and rate");
    scanf("%d%f",&qty,&rate);

    if(qty>1000)
        dis=10;
    else
        dis=0;
    tol=(qty*rate)-(qty*rate*dis/100);

    printf("Total expenses=Rs.%f\n",tol);
    return 0;
}
