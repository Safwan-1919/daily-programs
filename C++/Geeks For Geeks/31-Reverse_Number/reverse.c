#include <stdio.h>

int main(){
    int n, result = 0, remainder;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0){
        remainder = n % 10;
        // result = result * 10;
        // result = result + remainder;
        result = (result * 10) + remainder;
        n = n / 10;
    }
    printf("Result: %d\n", result);
    return 0;
}