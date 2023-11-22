// calculate the sum of digit of numbers using while loop

#include<stdio.h>
int main (){
    int num,i=1,b,sum=0,n;
    printf("Enter your number here:");
    scanf("%d",&num);
    while (num!=0){
        b=num%10;
        num=num/10;
        sum+=b;
        i++;

    }
    printf("%d",sum);
    return 0;
}