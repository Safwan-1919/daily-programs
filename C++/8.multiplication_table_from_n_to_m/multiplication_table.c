#include <stdio.h>

int main(){
    int n, m, i, mul;
    printf("Which number multiplication table you want?\n");
    scanf("%d",&n);
    printf("How many number of multiplication's you want?\n");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        mul = n * i;
        printf("%d x %d = %d\n",n,i,mul);
    }
    return 0;
}