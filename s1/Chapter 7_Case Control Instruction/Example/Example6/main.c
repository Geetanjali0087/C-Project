#include <stdio.h>

int main()
{

    int choice,num,i,fact;

    while(1){
         printf("1.factorial \n");
         printf("2.Prime\n");
          printf("3.Odd/Even\n");
          printf("4.exit\n");
           printf("Enter your choice\n");
          scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("Enter a number\n");
        scanf("%d",&num);

        fact=1;
        for(i=1;i<=num;i++)
            fact=fact*i;
        printf("factorial value=%d \n",fact);
        break;

    case 2:
        printf("Enter a number\n");
        scanf("%d",&num);
        for(i=2;i<num;i++){
            if(num%i==0){
                printf("Not Prime Number");
            }
        }
        if(i==num)
        {
            printf("Prime Number\n");
            break;
        }

    case 3:
        printf("Enter a number\n");
        scanf("%d",&num);

        if(num%2==0)
        printf("Even Number\n");
        else
         printf("Odd Number\n");
        break;


    case 4:
        exit(0);
    default:
         printf("Wroung choice\n");
    }
  }
   // printf("Hello World!\n");
    return 0;
}
