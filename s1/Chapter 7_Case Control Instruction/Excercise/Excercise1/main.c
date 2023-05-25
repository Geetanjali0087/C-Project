#include <stdio.h>

int main()
{
    char suit=3;
    switch(suit)
    {
    case 1:
          printf("Diamond\n");
    case 2:
        printf("Spade\n");
    default:
          printf("Heart\n");
    }
    printf("I throught one wears a suits\n");  //Heart



    return 0;
}
