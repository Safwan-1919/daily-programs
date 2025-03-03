#include <stdio.h>

int main(){
    int n = 5, i, table_of_5;
    printf("Multiplication table of 5\n");
    for(i=1;i<=10;i++){
        table_of_5 = n*i;
        printf("5 x %d = %d\n",i,table_of_5);
    }
    return 0;
}