#include <stdio.h>

int main()
{
    int temp;
    scanf("%d",temp);
    switch(temp){
    case(temp>20&& temp<=30):
        printf("Rain rain hetre again\n");
    case(temp>30&&temp<=40):
        printf("I wish I am on Everest\n");

   default:
        printf("weather\n");   //Error
    }

    //printf("Hello World!\n");
    return 0;
}
