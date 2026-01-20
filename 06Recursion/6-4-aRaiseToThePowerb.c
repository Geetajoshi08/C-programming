#include<stdio.h>
int power( int a, int b){
    if (a==0 || b==0) return 1;
    return a*power(a,b-1);
}

int main(){
    int a;
    printf("Enter a number A : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number B : ");
    scanf("%d",&b);

    int p = power(a,b);
    printf("%d Raise to the power %d is : %d",a,b,p);
    
    return 0;
}