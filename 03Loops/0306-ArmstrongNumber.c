#include <stdio.h>
int main(){

    int num , a , sum, lastdigit;
    printf("The Armstrong numbers from 0 to 500 are : ");

    //for loop
    for( num=0; num<=500; num++){
        
        a = num;
        sum = 0;

        // while loop
        while(a!=0){
        lastdigit = a%10;
        sum =  sum + lastdigit*lastdigit*lastdigit;
        a = a / 10;
        }
        
        if( sum==num ){
            printf("%d ",sum);
        }
        
    }
    return 0;
}