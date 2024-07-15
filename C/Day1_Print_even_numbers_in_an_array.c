#include <stdio.h>

int main(){
    int a[] = {22,45,8,27,39,19,52,91,16,88};
    int n = 10;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            printf("%d\n",a[i]);
        }
    } 
    return 0;
}