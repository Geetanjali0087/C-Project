#include <stdio.h>

int main()
{
    float cp,sp,p,l;
    printf("Enter cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
        printf("Seller profit o RS.%f\n",p);
    if(l>0)
        printf("Seller loss o RS.%f\n",l);
    if(p==0)
        printf("theit is no loss no profit\n");


    return 0;
}
