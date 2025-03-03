#include <stdio.h>

int main(){
    // Using While loop
    int original, n = 1221, reverse = 0 , remainder;
    printf("Enter a number: ");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if(original == reverse){
        printf("%d and %d is palindrome\n",original,reverse);
    }
    else{
        printf("%d and %d is not palindrome\n",original,reverse);
    }


    // Using for loop
    for(; n != 0; n = n/10){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
    }
    if(original == reverse){
        printf("%d and %d is palindrome\n",original,reverse);
    }
    else{
        printf("%d and %d is not palindrome\n",original,reverse);
    }
    return 0;
}