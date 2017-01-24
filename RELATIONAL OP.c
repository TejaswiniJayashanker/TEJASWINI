#include <stdio.h>

int main()
{
   int x,y;
   while(1)
    {
       printf("\n Enter two numbers X and Y:");
       scanf("%d%d",&x,&y);

       if(x>y)
           printf("\n X is greater than Y!");
       else if(x==y)
       printf("\n X is equal to Y!");
       else
       printf("\n X is less than Y!");
   }
       return 0;
}
