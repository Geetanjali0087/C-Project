#include <stdio.h>

int main()
{
    float F;
    printf("Enter a Faranite:\n");
    scanf("%f" ,&F);
    float c = (F-32)*5/9;

    printf("%f\n",c);
    return 0;
}
