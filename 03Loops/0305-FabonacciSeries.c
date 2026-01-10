#include <stdio.h>
int main(){
    // initializing variable
    int num, a=1, b=1, sum ;

    // input variable
    printf("Enter a number: ");
    scanf("%d",&num);

    // for loop
    for(int i=1; i<=num; i++){
        sum = a + b;
        printf("%d ",sum);
        a = b;
        b = sum;
    }
    return 0;
}