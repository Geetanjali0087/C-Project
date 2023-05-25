#include <stdio.h>

int main()
{
    int prime,isPrime;
    printf("Enter a Prime number");
    scanf("%d",&prime);
    factor(prime);
    return 0;


//int  factor(int num){
//    for(int i=2;i<num;i++){
//        if(num%i==0)
//            //printf("prime Not");
//        for(int j=i;j<num;j++){
//                if(num%=j=0){
//                    printf("%d\n",i);
//                }

////        else
////
//}
////    printf("Prime\n");
//    }
//}
int factor(int num){


for(int i=2; i<=num; i++)
{
    /* Check 'i' for factor of num */
    if(num%i==0)
    {
        /* Check 'i' for Prime */
        isPrime = 1;
        for(int j=2; j<=i/2; j++)
        {
if(i%j==0)
{
                isPrime = 0;
                break;
}
        }

    }
