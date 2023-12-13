
#include <stdio.h>
int main(){
    char array[100],rev[100],flag=0;
    printf("Enter the string here:");
    scanf("%[^\n]s",array);
    int l=0;
    for (int i=0;;i++){
        if (array[i]=='\0'){
            break;
        }
        else{
            l++;
        }
    }
    int j=0;
    for (int i=l-1;i>=0;i--){
        rev[j]=array[i];
        j++;

    }
    printf("The reversed string is :%s",rev);
    for (int i=0;i<l;i++){
        int n=array[i];
        int m=rev[i];
        if (m==n){
            continue;
        }
        else{
            flag=1;
            break;}

    }
    if (flag==1){
        printf("\nThe given string is not palindrome");
    }
    else{
        printf("\nThe given string is palindrome");
    }
    return 0;
}
