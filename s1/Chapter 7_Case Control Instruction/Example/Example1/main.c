#include <stdio.h>

int main()
{
    int i=2;
    switch(i){
    case 1:
        printf("I am in case1\n");
    case 2:
        printf("I am in case2\n");
    case 3:
        printf("I am in case3\n");
    default:
        printf("I am in Default\n");
    }
    return 0;
}
