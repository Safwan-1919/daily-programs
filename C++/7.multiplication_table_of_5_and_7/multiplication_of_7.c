#include <stdio.h>

int main(){
    int n = 7, i, table_of_7;
    printf("Multiplication table of 7\n");
    for(i=1;i<=10;i++){
        table_of_7 = n*i;
        printf("7 x %d = %d\n",i,table_of_7);
    }
    return 0;
}