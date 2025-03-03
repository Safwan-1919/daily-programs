#include <stdio.h>
#include <math.h>

int main(){
    int n,i,prime = 1;
    printf("Enter the number: ");
    scanf("%d",&n);


    // using n
    for(i=2;i<n;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }


    // using n/2
    for(i=2;i<n/2;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }


    // using sqrt()
    double sq = sqrt(n);
    for(i=2;i<sq;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
}