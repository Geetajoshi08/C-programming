#include <stdio.h>
// using call by reference method to swap the values...
void swap(int *n, int *m){           // using pointers to store address of the variables
    int temp = *n;   // temp = n
    *n=*m;           // n = m
    *m = temp;       // *m = 2 -> m = n
    return ;
}  

int main(){
    int n;
    printf("Enter 1st number : ");
    scanf("%d",&n);
    int m;
    printf("Enter 2st number : ");
    scanf("%d",&m);
    
    swap(&n,&m);        // storing address so that the values are stofred by the address and not bye vlaues in the pointers 

    printf("Swaped numbers are : %d, %d ",n,m);

    return 0 ;
}