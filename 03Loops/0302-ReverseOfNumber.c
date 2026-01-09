#include <stdio.h>
int main(){
    // initializing variable
    int num , rev=0;

    // input variable
    printf("Enter a number: ");
    scanf("%d",&num);

    // while loop
    while (num!=0){
        int lastdigit = num%10;
        rev = rev * 10 + lastdigit;
        num = num/10;   
    }
    printf("The reverse of the number is : %d", rev);
    return 0;
}
