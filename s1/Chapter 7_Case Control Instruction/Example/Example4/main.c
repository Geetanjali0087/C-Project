#include <stdio.h>

int main()
{
    int goals;
      printf("Enter the number of goals against india\n");
    scanf("%d",&goals);
      if(goals<=5)
        goto sos;
      else
      {
          printf("About thime soccer \n");
          printf("And said Goodbye to soccer\n");
          exit(1);
      }
      sos :
    printf("To err is human\n");
    return 0;
}
