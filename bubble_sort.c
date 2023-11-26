#include <stdio.h>
int main(){
    int arr[7]={34,56,4,3,21,5,6},temp;
    for (int i=0;i<7;i++){
        for (int j=0;j<6;j++){
            if (arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else {
                continue;
            }
        }
    }

    for (int i=0;i<7;i++){
        printf("\t%d,",arr[i]);
    }
    return 0;
}




