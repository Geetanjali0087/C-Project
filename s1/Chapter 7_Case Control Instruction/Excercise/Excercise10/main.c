#include <stdio.h>

int main()
{
    int sub1=30;
    int choice=1;

    switch(1){
    case 1:
        if(sub1>75)
            printf("First class\n");
        else if(sub1<=75 || sub1<35){
            printf("first class and Fail\n");
        }
    }

    printf("Hello World!\n");
    return 0;
}

