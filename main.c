#include <stdio.h>
#include<conio.h>
int main()
{
   char x;
   int a=0,b=0;
   float res;

   while(1)
   {
     printf("\n Enter 'A' for addition, 'S' for subtraction, 'M' for multiplication and 'D' for Division");
     scanf("%c",&x);
     printf("\n Enter the two integers:\n");
     scanf("%d %d",a,b);
      switch(x)
      {
        case 'A': res=a+b;
          printf("\n The sum is:%f",res);

          break;
        case 'S':res=a-b;
          printf("\n The difference is:%f",res);
          break;
        case 'M':res=a*b;
          printf("\n The Product is:%f",res);
          break;
        case 'D': if(b==0)
                printf("\n Invalid input as denominator!");
             else
               res=a/b;
            printf("\n The quotient is:%f",res);
            break;

      default: printf("\n You have chosen a wrong option!");




      }
}
    return 0;
}
