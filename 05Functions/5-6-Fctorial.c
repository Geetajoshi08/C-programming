#include<stdio.h>

int factorial(int a){

    int x=1;
    if (a==1 || a==0) return 1;
      for(int i=2; i<=a; i++)  {
          x = x*i;
          }
          return x;
    }

int main(){
    int a;
    printf("Enter a number  : ");
    scanf("%d",&a);

    int fact = factorial(a);

    printf("The factorial is : %d",fact);

    return 0;
}