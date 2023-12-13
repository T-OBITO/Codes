

#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the size of array :");
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,x,y;
    printf("enter the array elements :");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    printf("Enter the size of array :");
    scanf("%d%d",&x,&y);
    int b[x][y];
    if (n==x){
        printf("enter the array elements :");
        for (i=0;i<x;i++){
            for (j=0;j<y;j++){
                scanf("%d",&b[i][j]);
            }
        }
        int c[m][y];
        for (i=0;i<m;i++){
            for (j=0;j<n;j++){
                c[i][j]=0;
                for (int k=0;k<n;k++){
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
                
            }
        }
        printf("\nadded matrix\n");
        for (i=0;i<m;i++){
            for (j=0;j<n;j++){
                printf(" %d",c[i][j]);
            }
        printf("\n");
        }
    }

    else {
        printf("Matrix not multiplicable");
    }
    return 0;
}
