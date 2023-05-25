#include <stdio.h>

int main()
{

    float l,B,A,Perimeter,radius_of_circle , r,c;
    printf("Enter length & breadth\n");
    scanf("%f%f",&l,&B);
    A=l*B;
    printf("%f\n",A);
    Perimeter=2*(l+B);
    printf("%f\n",Perimeter);

    printf("Enter a radius..\n");
    scanf("%f",&r);
    c=2*3.14*r*r;
    printf("%f\n",c);
    return 0;
}
