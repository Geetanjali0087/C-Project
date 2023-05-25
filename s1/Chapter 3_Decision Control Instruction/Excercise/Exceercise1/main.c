#include <stdio.h>

int main()
{
    //   int a=300,b,c;
    //   if(a>=400)
    //   b=300;
    //   c=200;
    //     printf("%d\n%d\n",b,c);

    // int x=10,y=20;
    // if(x==y);
    //  printf("%d\n%d\n",x,y);


    // int x=3;
    // float y=3.0;
    // if(x==y)
    // printf("X and Y are Equal\n");
    // else
    // printf("x and y are not euqal\n");


    // int x=3,y,z;
    // y=x=10;
    // z=x<10;
    // printf("x=%d y=%d  z=%d\n",x,y,z);


    // int i=65;
    // char j='A';
    // if(i==j)
    // printf("C is WOW\n");
    // else
    // printf("C is Headache\n");


    // float a=12.25,b=12.52;
    // if(a=b)
    // printf("A an d b is euqal");


    // int j=10,k=12;
    // if(k>=j){
    //     {
    //         k=j;
    //         j=k;
    //     }
    // }


    // int x=10;
    // if(x>=2)
    // printf("%d\n",x);


    // if('X'<'x')
    // printf("Accccc");


    // int x=10,y=15;
    // if(x%2=y%3)
    // printf("carpahiiiss\n");  //erro


    // int a,b;
    // scanf("%d%d",a,b);
    // if(a>b)
    // printf("This is a game\n");
    // else
    // printf("You have to play\n"); //2 3 Segmentation fault


    return 0;
}
-----------------------------------------------------------

// chapter 3--exercise--1
#include <stdio.h>

                                                                                       int main() {
    int num=1234,rev=0,d;
    while(num!=0){
        d=num%10;//4
        rev=rev*10+d;
        num=num/10;
    }
    printf("%d\n",rev);
    if(num==rev){
        printf("Equal..\n");
    }
    else
        printf("Not Equal..");

    return 0;
}
