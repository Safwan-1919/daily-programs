#include <stdio.h>

int main(){
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n==0){
            return 1;
        }
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}