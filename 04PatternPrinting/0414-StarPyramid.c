#include <stdio.h>
int main(){
 
    int n;                                 //Pyramid for numbers 
    printf("Enter number of rows : ");
    scanf("%d",&n);
    
    //int a=1;                             (can also do in this way )
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){         // for spaces
            printf("  ");
        }
        for(int k=1; k<=2*i-1; k++){      // for star        (initilizing k<=i)
            printf("* ");
        }
        
        //a=a+2;                          (and then incresing the starts by 2)
        printf("\n");
    }
 
    int m;                                 // pyramid for numbers
    printf("Enter number of rows : ");
    scanf("%d",&m);
         
    for(int i=1; i<=m; i++){
         
        for(int j=1; j<=m-i; j++){          // for spaces
            printf("  ");
        }
        for(int k=1; k<=2*i-1; k++){           // for star        
            printf("%d ", k);
            
        }

        printf("\n");
    }

    return 0;
}