#include <stdio.h>

int main() {
    int n;    // number of rows
    printf("Enter numbers of rows: ");
    scanf("%d",&n); 

    for (int i = 1; i <= n; i++) {

        // Odd rows → Numbers
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        }
        // Even rows → Alphabets
        else {
            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }

        printf("\n");
    }

    return 0;
}
