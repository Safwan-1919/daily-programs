#include <stdio.h>

int main(){
    int n, original, reverse = 0, remainder;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0){
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10; 
    }
    if(original == reverse){
        printf("Original: %d\n", original);
        printf("Reverse: %d\n", reverse);
        printf("%d is a palindrome\n", original);
    }
    else{
        printf("Original: %d\n", original);
        printf("Reverse: %d\n", reverse);
        printf("%d is not a palindrome\n", original);
    }
    return 0;
}