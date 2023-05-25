#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any one of the Alphabets a,b or c");
    scanf("%c",ch);
    switch(ch){
    case 'a':
    case 'A':
        printf(" a as in Apple\n");
        break;

    case 'b':
    case 'B':
        printf(" b as in Brain\n");
        break;

    case 'c':
    case 'C':
        printf(" c as in Cookie\n");
        break;
    default:
        printf("Wish you knew what are Alphabets\n");
        return 0;
    }


}
