#include<stdio.h>
int stairs( int n){
    if (n<=2) return n;
    int totalways = stairs(n-1) + stairs(n-2);
    return totalways;
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int ways = stairs(n);
    printf("Number of ways you can climb %d stairs are : %d",n,ways);
    
    return 0;
}