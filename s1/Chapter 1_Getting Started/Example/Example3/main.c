#include <stdio.h>

int main()
{
    float km,cm,m,ft,inch;
    printf("\n Enter the distance in kilometer: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;

    printf("Distance in meter=%f\n",m);
    printf("Distance in meter=%f\n",cm);
    printf("Distance in meter=%f\n",ft);
    printf("Distance in meter=%f\n",inch);

    return 0;
}
