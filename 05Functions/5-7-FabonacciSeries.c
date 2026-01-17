#include<stdio.h>

int fabonacci(int a){
    int num;
    int y=1;
    int z=1;
    if(a==1 || a==2) return 1;
      for(int i=1; i<=a-2; i++)  {
          y+z;
          num=y+z;
          y=z;
          z=num;
          }
        return num;
    }

int main(){
    int a;
    printf("Enter the nth term of the series  : ");
    scanf("%d",&a);

    printf("The %d term of fabonacci series  is :  %d",a,fabonacci(a));

    return 0;
}