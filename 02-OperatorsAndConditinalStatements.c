// Calculator using operators and switch statement

#include<stdio.h>

int main(){    
    // declaring variables
    float a, b , result;
    char op ; 

    //input variables
    printf("Enter two Numbers : ");
    scanf("%f%f",&a,&b);

    while (1)   // infinite loop
    {
        // Menu
        printf("\n\n---- CALCULATOR MENU ----");
        printf("\n+  Addition");
        printf("\n-  Subtraction");
        printf("\n*  Multiplication");
        printf("\n/  Division");
        printf("\nN  Enter new numbers");
        printf("\nE  Exit");
        printf("\n-------------------------");

    // input result
    printf("\nEnter your choice : ");
    scanf(" %c",&op);     // space befor c is for important

    // switch statement
    switch (op)
    {
    case '+':
        result = a+b;
        printf("Result : %.2f",result );
        break;

    case '-':
        result = a-b;
        printf("Result : %.2f",result );
        break;

    case '*':
        result = a*b;
        printf("Result : %.2f",result );
        break;

    case '/':
        // if-else statements
        if(b!=0){
        result = a/b;
            printf("Result : %.2f",result );}
        else{
            printf("2nd number should not be 0 !");
            }
        
        break;

    case 'N':
    case 'n':
                printf("Enter new two numbers: ");
                scanf("%f %f", &a, &b);
                break;

    case 'E':
    case 'e':
                printf("Calculator exited successfully ");
                return 0;

    default:
        printf("Invalid options! Try again");
        break;
    }
}
}