#include <stdio.h>
int main (){
    int arr[2][2]={{2,3},{4,5}};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}