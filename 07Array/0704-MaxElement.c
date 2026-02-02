#include<stdio.h>
int main(){

    int arr[7] = {1,4,6,2,88,4,67};
    int max = arr[0];
    for (int i=0; i<=6; i++) {
        if(max<arr[i]){
         max = arr[i];
        }
    }
    printf("The maximum no. among the array is : %d ",max);
     return 0;
}
