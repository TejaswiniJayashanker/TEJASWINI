#include <stdio.h>
#include<math.h>

int main()
{
     float area,peri,len_dia,a,b;

while(1)
{
     printf("Enter the length and breadth of the rectangle:");
     scanf("%f%f",&a,&b);
     area=a*b;
     peri=2*(a+b);
     len_dia=sqrt((a*a) + (b*b));
     printf("\n The area of rectangle is:%f ",area);
     printf("\n The perimeter of rectangle is:%f ",peri);
     printf("\n The length of the diagonal of rectangle is:%f ",len_dia);

 }



    return 0;
}
