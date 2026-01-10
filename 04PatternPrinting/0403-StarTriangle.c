#include<stdio.h>
int main(){
    int n;
    printf("Enter numbers of rows: ");
    scanf("%d",&n);

    // for loop 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    int m;
    printf("Enter numbers of rows: ");
    scanf("%d",&m);

    // for loop for upside down traiangle
    for(int i=1; i<=m; i++){
        for(int j=m; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}
