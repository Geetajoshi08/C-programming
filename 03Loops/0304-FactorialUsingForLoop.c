#include <stdio.h>
int main(){
    // initializing variable
    int num, fact=1 ;

    // input variable
    printf("Enter a number: ");
    scanf("%d",&num);

    // for loop
    for(int i=1; i<=num; i++){
      fact = fact*i;
    }
    printf("The factorial of the number is : %d", fact);
    return 0;
}
    
