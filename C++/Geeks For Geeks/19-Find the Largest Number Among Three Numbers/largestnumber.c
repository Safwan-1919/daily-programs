#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b && a>=c){
        printf("%d is a largest number\n", a);
    }
    else if(b>=a && b>=c){
        printf("%d is a largest number\n", b);
    }
    else{
        printf("%d is a largest number\n", c);
    }
    printf(" \n");

    if(a>=b){
        if(a>=c){
            printf("%d is a largest number\n", a);
        }
        else{
            printf("%d is a largest number\n", c);
        }
    }
    else{
        if(b>=c){
            printf("%d is a largest number\n", b);
        }
        else{
            printf("%d is a largest number\n", c);
        }
    }
    printf(" \n");
    
    int max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    printf("%d is a largest number\n", max);
    return 0;
}