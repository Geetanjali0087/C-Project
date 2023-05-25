#include <stdio.h>

int main()
{
        float r,x,y,theta;

        printf("Enter a co-ordinates x &Y\n");
        scanf("%f%f",&x,&y);

        r=sqrt(x*x+y*y);
        theta=atan(y/x);
        theta = theta * (180.0 / 3.14);

        printf("%f%f",r,theta);
        return 0;
}
