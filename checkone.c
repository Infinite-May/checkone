#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    int i;
    for(i=2;i<argc;i++)
    {
        char *temp=argv[i];
        if(strcmp(temp,"1")==0)
        {
            printf("YES!\n");
        }
        else
        {
            printf("NO!\n");
        }
    }
   return 0;
}
