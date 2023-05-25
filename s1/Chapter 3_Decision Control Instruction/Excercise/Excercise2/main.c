#include <stdio.h>

int main()
{
    int Ram,Shyam,Ajay;
    printf("Enter a ages of");
    scanf("%d%d%d",&Ram,&Shyam,&Ajay);
    if(Ram>=Shyam && Ram>=Ajay ){
        printf("Ram is Younger\n");
    }
    else if(Shyam>=Ram && Shyam>=Ajay){
        printf("Shyam is Younger\n");
    }
    else{
        printf("Ajay is Younger\n");

    }

    return 0;
}
