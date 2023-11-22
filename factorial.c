// factorial of number using while loop

#include <stdio.h>
int main ()

{   
    int a,i,fact=1;
    printf ("Enter the number whose factorial you want to calculate :");
    scanf ("%d",&a);

    for (i=1;i<=a;i++){
        fact*=i;
        
    }
    printf("Factorial of %d is %d",a,fact);
    return 0;

}
