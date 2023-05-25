#include <stdio.h>

int main()
{
    float a=3.5;
    switch(a){
    case 0.5:
        printf("The art of c\n"); break;
    case 1.5:
        printf("The sprit of c\n"); break;
    case 2.5:
          printf("See through\n"); break;  // Error
    }


    return 0;
}
