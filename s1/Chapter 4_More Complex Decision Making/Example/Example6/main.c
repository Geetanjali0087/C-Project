#include <stdio.h>

#include <stdlib.h>
#include <math.h>

int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Upper case latter\n");
    if(ch>=97 && ch<=122)
        printf("Lower case latter\n");

    if(ch>=48 && ch<=57)
        printf("Character is a digit\n");

    if((ch>=0&&ch<48)||(ch>57&&ch<65)||(ch>90&&ch<97)||ch>122)

    printf("Character is a special Symbol\n");
    return 0;
}
