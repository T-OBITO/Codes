#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("enter numbers you want to perform operations on seperated by blankspace--");
    scanf("%d%d",&a,&b);
    printf("\nthe addition of two numbers --%d",a+b);
    printf("\nthe subtraction of two numbers --%d",a-b);
    printf("\nthe multiplication of two numbers --%d",a*b);
    printf("\nthe division of two numbers --%d",a%b);
    return 0;
}