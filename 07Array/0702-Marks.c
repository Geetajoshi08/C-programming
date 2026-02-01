#include<stdio.h>
int main(){
    int marks [10] = {95,90,45,18,56,20,30,34,50,10};
    for (int i=0; i<10; i++) {
        if (marks[i]<35){
            printf("%d ",i);
        }
    }
     return 0;
}
