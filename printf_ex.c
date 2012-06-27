#include <stdio.h>
#include <unistd.h>

int main()
{
     printf("+++++++++");
     sleep(2);
     printf("\n");

     printf("---------");
     fflush(stdout);
     return 0;
}
