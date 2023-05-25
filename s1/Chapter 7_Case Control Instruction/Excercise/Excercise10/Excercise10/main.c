#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a Student class");
    scanf("%d",&a);
    printf("Enter a students get fail in sybjects");
    scanf("%d",&b);

    switch(a){
    case(1):
        switch(b){
    case 1:
    case(2):
        break;
    case(3):
        printf("He does not get any grace marks \n");
        break;

    default :
        printf("You will get a grace marks of 5111\n");
    }
    break;

case 2:

    switch(b)
    {
    case 1:
    case(2):
        printf("He does not get any grace marks\n");
        break;

    default :
        printf("You will get a grace marks of 4111\n");
    }
    break;

case 3:

    switch(b)
    {
    case 1:
        printf("He does not get any grace marks\n");
        break;

    default :
        printf("You will get a grace marks of 500\n");
    }
    break;
}
    return 0;
}
