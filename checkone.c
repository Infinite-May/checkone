#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;
    for(i=2;i<argc;i++)
        if(*argv[i]=='1')
        {
            printf("YES!\n");
        }
        else
        {
            printf("NO!\n");
        }
   return 0;
}
