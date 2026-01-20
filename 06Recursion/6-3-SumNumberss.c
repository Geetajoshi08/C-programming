#include<stdio.h>
int sum( int a){
    if (a==0) return 0;
    return a+sum(a-1);
}

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int add = sum(a);
    printf("%d",add);
    
    return 0;
}