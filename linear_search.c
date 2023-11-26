#include<stdio.h>
int main (){
    int arr[9]={23,56,78,65,35,90,31,87,56},num;
    printf("Enter the number you want to search :");
    scanf("%d",&num);
    for (int i=0;i<9;i++){
        if (arr[i]==num){
            printf("Number found at %d position\n",i+1);
        }
    }
    return 0;
}