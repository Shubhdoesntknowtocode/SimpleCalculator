#include <stdio.h>

//CALCULATOR PROGRAM WHICH CAN DO THE 4 BASIC CALCULATION
char operator;
float num1;
float num2;

int main(){
    printf("\nEnter a Valid Operator (+ - / *): ");
    scanf("%c", &operator);//get the operator
    printf("\nSelected operator is: %c", operator);
    printf("\nEnter the first number: ");/*get the number*/
    scanf("%f", &num1);
    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
        case '+':
            printf("%f", num1 + num2);
            break;
        case '-':
            printf("%f", num1 - num2);
            break;
        case '*':
            printf("%f", num1 * num2);
            break;
        case '/':
            printf("%f", num1 / num2);
            break;
        default:
            printf("ENTER A VALID OPERATOR!");
            break;
    }
}