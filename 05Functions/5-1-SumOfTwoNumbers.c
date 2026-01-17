#include<stdio.h>
int add(int a, int b){
    return a+b;
}

int main(){
    int x;
    printf("Enter 1st Number : ");
    scanf("%d",&x);
    int y;
    printf("Enter 2st Number : ");
    scanf("%d",&y);

    int sum = add(x,y);
    printf("The sum is : %d", sum);
    
    return 0;

}