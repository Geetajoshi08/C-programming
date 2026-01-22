#include<stdio.h>
int maze( int cr, int cc, int er, int ec){             // cr:current row, cc:current column, er:end row, ec:end column
    int rightways = 0;
    int downways =  0; 
    if (cr==er && cc==ec) return 1;
    if (cr==er){                                       // only rightways call
        rightways += maze (cr,cc+1,er,ec);
    }
    if(cc==ec){                                        // only downways call
        downways += maze (cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze (cr,cc+1,er,ec);
        downways += maze (cr+1,cc,er,ec);
    }
    int totalways = rightways + downways ;
    return totalways;
}

int main(){
    int n;                                             // no of rows
    printf("Enter number of rows of maze : ");
    scanf("%d",&n); 
    int m;                                             // no of column
    printf("Enter number of columns of maze : ");
    scanf("%d",&m);

    int ways = maze(1,1,n,m);
    printf("Number of ways you can reach from 1,1 to %d,%d are : %d",n,m,ways);
    
    return 0;
}