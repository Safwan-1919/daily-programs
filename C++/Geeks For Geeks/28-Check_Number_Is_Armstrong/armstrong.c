#include <stdio.h>
#include <math.h>

int main(){
    int n, original, remainder, result = 0;
    printf("***** Program to check whether the number is Armstrong or not *****\n");
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        remainder = n % 10;
        result = result + pow(remainder, 3);
        n = n / 10;
    }
    if(original == result){
        printf("%d is a Armstrong number\n", original);
    }
    else{
        printf("%d is not a Armstrong number\n", original);
    }
    return 0;
}