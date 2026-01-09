#include <stdio.h>
int main(){
    // initializing variable
    int num, fact=1 ;

    // input variable
    printf("Enter a number: ");
    scanf("%d",&num);

    // while loop
    while(num!=0){
        fact = fact * num;
        num--;
    }
    printf("The factorial of given no. is : %d", fact);
    return 0;
}

