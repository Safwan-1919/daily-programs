#include <stdio.h>
#include <math.h>

int main(){
    int lb, ub;
    printf("Enter the lower bound: ");
    scanf("%d", &lb);
    printf("Enter the upper bound: ");
    scanf("%d", &ub);
    printf("Series of Armstrong number from %d to %d\n", lb, ub);
    for(int n=lb; n<=ub; n++){
        int original = n;
        int remainder, result = 0;
        int digits = 0;

        int temp = n;
        while(temp != 0){
            temp = temp / 10;
            digits++;
        }

        temp = n;
        while(temp != 0){
            remainder = temp % 10;
            result = result + pow(remainder, digits);
            temp = temp / 10;
        }

        if(result == original){
            printf("%d ", original);
        }
    }
    return 0;
}