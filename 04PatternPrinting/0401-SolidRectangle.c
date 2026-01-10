#include<stdio.h>
int main(){
    int n;
    printf("Enter numbers of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter numbers of rows : ");
    scanf("%d",&m);

    // for loop
    for(int i=1; i<=n; i++){   // no. of rows / lines -> i
        for(int j=1; j<=m; j++){   // no. of columns -> j
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}