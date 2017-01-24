#include <stdio.h>

int main()
{
    int i,n;
    while(1)
    {
         printf("\n Print the odd nos:");
         scanf("%d",&n);
         printf("\n ALL Odd nos from 0 are:");

         for(i=0;i<=n;i++)
             if(i%2!=0)
             {
                  printf("\t %d \t",i);

             }
    }
    return 0;
}
