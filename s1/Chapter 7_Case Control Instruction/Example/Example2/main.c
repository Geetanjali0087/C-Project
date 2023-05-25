#include <stdio.h>

int main()
{ char ch;
    printf("Enter any one of the alphabets a,b or c");
    scanf("%c",&ch);

    switch(ch){
    case 'a':
    case 'A' :
        printf("a is an Apple\n");
        break;
    case 'b':
    case 'B':
        printf("B is ball\n");
        break;
    case 'c':
    case 'C':
        printf("I am in case3\n");
    default:
        printf("I am in Default\n");
    }
    return 0;
}
