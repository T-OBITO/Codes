// write a program to check if a number is prime or not using while loop

#include <stdio.h>
int main (){
    int num,flag=0,i=2;
    printf("Enter the number you want to check :");
    scanf("%d",&num);
    while (i<num){
        if (num%i==0){
            flag+=1;
        }
        i++;
    }
    if (flag==0){
        printf("%d is a prime number ",num);
    }
    else {
        printf("%d is a composite number ",num);
    }
    return 0;
}