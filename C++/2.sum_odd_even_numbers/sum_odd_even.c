#include <stdio.h>

int main(){
    int n,i,even=0,odd=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            even = even + i;
        }
        else{
            odd = odd + i;
        }
    }
    printf("Sum of odd number is %d\n",odd);
    printf("Sum of even numbers is %d\n",even);
    return 0;
}