#include <stdio.h>

int main()
{
    float a,b,c,sp,area;

    printf("\nEnter sides of a traingle: ");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of traingle=%f\n",area);

    return 0;
}
