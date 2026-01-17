#include <stdio.h>
void swap(int *n, int *m){
    int temp = *n;
    *n=*m;
    *m = temp;
    return ;
} 

int main(){
    int n;
    printf("Enter 1st number : ");
    scanf("%d",&n);
    int m;
    printf("Enter 2st number : ");
    scanf("%d",&m);
    
    swap(&n,&m);

    printf("Swaped numbers are : %d, %d ",n,m);

    return 0 ;
}