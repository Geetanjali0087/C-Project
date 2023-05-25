#include <stdio.h>

int main()
{
    int a=3,b=4,c;
    c=b-a;
    switch(c){
    case 1||2:
        printf("God give me a change things\n");
        break;

    case a||b:
        printf("God give me a change run my show\n"); // error
        break;
    }

    printf("Hello World!\n");
    return 0;
}
