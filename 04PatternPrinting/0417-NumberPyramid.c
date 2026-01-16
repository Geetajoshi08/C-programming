#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    int nsp = 1;                  // number of spaces
    int nst = n;                    // number of stars
    ;
    for(int m=1; m<=2*n+1; m++){
        printf("%d ",m);
    }
    printf("\n");

    for(int i=1; i<=n; i++){
        int a=1;

        for(int k=1; k<=nst; k++){
            printf("%d ",a);
            a++;
        }
        for(int j=1; j<=nsp; j++){
            printf("  ");
            a++;
        }
        for(int k=1; k<=nst; k++){
            printf("%d ",a);
            a++;
        }
        
        nsp+=2;
        nst--;
        
        printf("\n"); 
    }
    return 0;
}