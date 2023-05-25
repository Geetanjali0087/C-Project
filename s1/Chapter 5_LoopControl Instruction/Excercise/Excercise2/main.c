#include <stdio.h>

int main()
{
    int num=153,count=1,sum,rem;

    while(count<=500){
        num=count;
        sum=0;
        while(num){
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(count==sum){
            printf("%d = Armstrong number\n",count);
        }
        else{
            printf("%d = Not Armstrong Number\n",count);
        }
        count++;
    }

    return 0;
}
