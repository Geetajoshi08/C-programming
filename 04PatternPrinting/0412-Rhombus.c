#include <stdio.h>
int main(){

    int n; 
    printf("Enter number of rows : ");
    scanf("%d",&n);
    
    int a;
    for(int i=1; i<=n; i++){
        a=n;
        for(int j=1; j<=n-i; j++){     // for spaces
            printf("  ");
        }
        for(int k=1; k<=n; k++){      // for star
            
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}