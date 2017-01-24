#include <stdio.h>
int main()
{
    float percentage;
     while(1)

    {
    printf("Enter your Percentage: ");
    scanf("%f",&percentage);
    if(percentage<50)
        printf("\nYou secured Second class!");
    else if(percentage<35)
        printf("\nYou Failed!");
    else if (percentage<70)
        printf("\n You secured FIRST CLASS!");
    else
        printf("\n You have secured  FIRST CLASS WITH DISTINCTION\n");
     }
    return 0;

}
