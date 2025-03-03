#include <stdio.h>

int main(){
    
    printf("Print from A to Z\n");
    for(char c = 'A'; c <= 'Z'; c++){
        printf("%c ", c);
    }
    printf(" \n");
    printf("Print from a to z\n");
    for(char c = 'a'; c <= 'z'; c++){
        printf("%c ", c);
    }
    printf(" \n\n");
    
    printf("Print from A to Z\n");
    for(char i = 65; i <= 90; i++){
        printf("%c ", i);
    }
    printf(" \n");
    
    printf("Print from a to z\n");
    for(char i = 97; i <= 122; i++){
        printf("%c ", i);
    }
    return 0;
}