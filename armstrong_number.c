#include<stdio.h>
#include<math.h>
int main(){
    int num ,rev=0,power=0,rem;
    printf("Enter the number you want to check :");
    scanf("%d",&num);
    int num2=num;
    while(num2!=0){
        num2=num2/10;
        power++;
    }
    num2=num;
    while (num2!=0){
        rem=num2%10;
        num2/=10;
        rev+=pow(rem,power);
    }
    if (rev==num){
        printf("%d is an angstrom number ",num);
    }
    else{
        printf("%d is not an angstrom number ",num);
    }
    return 0;
}