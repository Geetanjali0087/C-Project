//factorial program

#include <stdio.h>

int main()
{
    int fact,num;

    printf("Enter a number\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d=%d\n",num,fact);
    return 0;
}

int factorial(int num){
    int i;
    int fact=1;
    for( i=1;i<=num;i++)
        fact=fact*i;
    return(fact);
}
