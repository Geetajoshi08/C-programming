#include<stdio.h>

int factorial(int x){                      // function for factorial
    int fact = 1;          
    for(int i=2; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n, int r){            // function for combination
    int ncr = factorial(n)/ (factorial(r) * factorial(n-r));
    return ncr;
}

int permutation(int n, int r){            // function for permutaion
    int npr = factorial(n) / factorial(n-r);
    return npr;
}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);

    printf("permutaion is : %d\n",permutation(n,r));    // direact calling of function - permutation
    printf("combination is : %d",combination(n,r));  // direact calling of function - combination
    
    return 0;

}