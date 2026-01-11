#include<stdio.h>
int main(){
    int n;
    printf("Enter numbers of rows: ");
    scanf("%d",&n);
    int a;
    // for loop
    for(int i=1; i<=n; i++){
        a = n;
        for(int j=1; j<=n; j++){
            if( i==j || i+j==6){
            printf("* ");
           // a--;
            }
            else printf("  ");
        }
        
        printf("\n");
    }

    return 0;

}