#include <stdio.h>

int main(){
    int a, b, result = 0;
    char op;
    printf("Enter operator: ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid Operator!!! \n");
    }
    printf("%d %c %d = %d\n", a, op, b, result);
    return 0;
}