// program to find max of n numbers using for loop


#include <stdio.h>
int main ()
{
    int i,n,max=1,num;
    printf("Enter the number of numbers:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("Enter the %d number :",i);
        scanf("%d",&num);
        max=(num>max)?num:max;

    }
    printf ("Maximum of given number is %d",max);
    return 0;
}
