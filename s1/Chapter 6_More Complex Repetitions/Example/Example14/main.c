#include <stdio.h>

int main()
{
    printf("\n PRIME numbers between 1 and 300 are:\n1\t");
    for(n=2;n<300;n++)
    {
        int i=2;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d\t",n);
    }
    return 0;
}
