#include<stdio.h>
void fabonacci( int x, int y, int a){
    if (a==2) return ; 
    int new = x+y;
    x=y;
    y=new;
    printf("%d ", new);
    fabonacci(x,y,a-1);
    return ;
}

int fibo(int b){
    if(b==1 || b==2) return 1;
    return fibo(b-1) + fibo(b-2);
}

int main(){
    int a;
    printf("Enter the length of fabonacci series : ");
    scanf("%d",&a);
    printf("fabonacci series is : 1 1 ");
    fabonacci(1,1,a);

    int b;
    printf("\nEnter the nth term you want of a fabonacci series : ");
    scanf("%d",&b);
    printf("%d",fibo(b));
    
    
    return 0;
}