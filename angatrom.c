#include<stdio.h>
#include<math.h>
int main (){
  int num ,count=0,duplicate,sum=0,digit;
  printf ("Enter the number you want to check ");
  scanf("%d",&num);
  duplicate=num;
  while (duplicate!=0){
    duplicate/=10;
    count++;
  }
  duplicate=num;

  while (duplicate !=0){
    digit=duplicate%10;
    sum+=pow(digit,count);
    duplicate/=10;
  }
  if (sum==num){
    printf("\nIt is angstrom number");
  }
  else{
    printf("\nIt is not an angstrom number");
  }
  return 0;
}

