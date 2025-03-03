#include <stdio.h>

int main(){
    // My solution
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is a even number\n",n);
    }
    else{
        printf("%d is a odd number\n",n);
    }
    return 0;
}