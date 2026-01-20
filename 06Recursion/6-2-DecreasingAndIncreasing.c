#include<stdio.h>
void decrease(int n){
    if(n==0) return ;
    printf("%d\n",n);
    decrease (n-1);
    return ;
}

void increase (int x ,int m){
    
    if (x>m) return;
    printf("%d\n",x);
    increase (x+1,m);
    return ;
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    decrease(n);
    int m;
    printf("Enter a number : ");
    scanf("%d",&m);
    increase(1,m);
    
    return 0;
}