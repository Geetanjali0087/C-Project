#include <stdio.h>
#include <stdlib.h>



int main()
{
  FILE * fpointer=fopen("employee.txt","w");

  fprintf(fpointer,"jim, salesman\n");


  fclose(fpointer);
    return 0;
}
