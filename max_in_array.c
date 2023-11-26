#include<stdio.h>
int main(){
    int arr[6]={1,26,31,4,5,6},max;
    max=arr[3];
    for (int i=0;i<6;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("Maximum number from the array= %d",max);
    return 0;
}